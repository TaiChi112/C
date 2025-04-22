## ❓ 6. คำถามที่ควรรู้ต่อไป
- จะจัดการ .h dependencies อัตโนมัติได้อย่างไร?
- จะใช้ make -j ให้ build หลายไฟล์พร้อมกันได้ไหม?
- จะใช้ make debug แยกจาก make release ได้ยังไง?

## 💡 7. แนวคิดเพิ่มเติมที่ควรพิจารณา
- ใช้ Makefile ร่วมกับโครงสร้าง directory แบบ modular (เช่น src/module/*.c)
- ใช้ Makefile แยกหลายไฟล์แล้ว include กันได้ เช่น Makefile.common
- ใช้ valgrind, gcov, gdb ร่วมกับ Makefile เพิ่ม debug/test

## 🔁 9. คำถามกระตุ้น
- ถ้าต้อง build แบบ release และ debug แยก binary ได้ไหม?
- ถ้าต้อง link กับไลบรารีอย่าง -lm หรือ -lpthread จะเพิ่มยังไง?
- ถ้าต้อง build test case แยก จะจัดการ makefile ยังไง?