cmake_minimum_required(VERSION 3.20)
project(cecomp)

add_subdirectory(libs/open.mp-sdk)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

include(AddSAMPPlugin)

add_samp_plugin(${PROJECT_NAME}
	plugin.def
	
	src/main.cpp
	src/main.h
	src/plugin.cpp
	src/plugin.h
	src/script.cpp
	src/script.h

	libs/samp-ptl/ptl.h
)

target_include_directories(${PROJECT_NAME} PRIVATE 
	libs
	libs/samp-ptl
)

target_link_libraries(${PROJECT_NAME} PRIVATE OMP-SDK)
