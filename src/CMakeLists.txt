include(AMXConfig)
include(AddSAMPPlugin)

set(SAMP_SDK_ROOT "${PROJECT_SOURCE_DIR}/libs/samp-plugin-sdk")
find_package(SAMPSDK REQUIRED)

include_directories(
	${SAMPSDK_INCLUDE_DIR}
)

file(GLOB_RECURSE SOURCES
	${SAMPSDK_DIR}/*.cpp
	${SAMPSDK_DIR}/*.c

	*.cpp
	*.h
)

add_samp_plugin(cecomp
	${SOURCES}
	plugin.def
)

target_link_libraries(${PROJECT_NAME} PRIVATE OMP-SDK omp-gdk OMP-Network)
