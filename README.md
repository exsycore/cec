# Color Embed Converter

* Original: Ak-kawit Tahae

[![GitHub Release](https://img.shields.io/github/v/release/exsycore/cec.svg)](https://github.com/exsycore/cec/releases/latest)
[![Download](https://img.shields.io/github/downloads/exsycore/cec/total?color=%233498db)](https://github.com/exsycore/cec/releases/latest)

ปลั๊กอิน CEC ช่วยเลื่อนแท็กสีให้แสดงผลได้อย่างถูกต้อง

## การติดตั้ง (open.mp)
* นำไฟล์ [cec-omp.dll/.so](cec-omp.dll), [pawnraknet.dll/.so](https://github.com/katursis/Pawn.RakNet/releases) ใส่ในโฟลเดอร์ components ของคุณ (ไม่ต้องเพิ่มอะไร config.json สามารถใช้งานได้เลย)
```bash
│ GameMode/
├── components/
│   ├── cec-omp.dll
│   └── pawnraknet.dll
```

* นำไฟล์ [cec.inc](cec.inc), [Pawn.RakNet.inc](https://github.com/katursis/Pawn.RakNet/releases/tag/1.6.0-omp) ใส่ในโฟลเดอร์ Includes ของคุณ
```bash
│ qawno/
├── include/
│   ├── cec.inc
│   └── Pawn.RakNet.inc
```

## ตัวอย่าง
**ปัญหาและการติดตั้ง**

* ปัญหา

ก่อนใช้งาน

![ก่อนใช้งาน](https://i.imgur.com/M14TACI.png)

หลังใช้งาน

![หลังใช้งาน](https://i.imgur.com/UiuOF5B.png)

* การติดตั้ง
```Pawn
#include <open.mp>
#include <cec>
```

## การบิ้ว

## Sources
```bash
git clone --recursive https://github.com/exsycore/cec-omp.git
```

## Building on Windows
```bash
mkdir build
cd build
cmake .. -A Win32 -T ClangCL
```
Open Visual Studio and build the solution.
    
