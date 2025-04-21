## base of knowledge
- memory layout in c
- function pointer
- encpsulation low-level
- oop with c
- Object-Oriented C (OOC)

จะ implement polymorphism เต็มรูปแบบใน C ได้ยังไง?

จะ design struct ให้รองรับ inheritance ลึก 2-3 ชั้นได้ยังไง?

จะ integrate กับ system C แบบมี plugin (dynamic method table) ยังไง?

ขยายระบบ	เพิ่มชนิดสัตว์ใหม่ได้โดยไม่แตะ base (Open/Closed principle) <!--concept oop in c-->

what is vtable in c

ถ้าอยากเก็บหลายชนิดไว้ใน array เดียวกัน จะต้องใช้ pointer + cast ยังไง?

จะเขียน factory function ให้สร้าง object แต่ละชนิดแบบ abstract ยังไง?

แล้วเราจะใช้ function pointer แบบนี้สร้าง “vtable” แบบ C++ ได้ไหม?

ถ้าเราทำ struct inheritance 2 ชั้น จะจัดการ pointer ยังไงให้ถูก type?

จะใช้ macro หรือ typedef ช่วยลด verbosity ได้ยังไง?

| ด้าน            | มีพื้นฐาน Information Management    | ไม่มีพื้นฐาน                     |
| -------------- | -------------------------------- | ---------------------------- |
| การออกแบบระบบ  | ทำได้ดี มีประสิทธิภาพ                  | มักออกแบบซ้ำซ้อนหรือทำให้ระบบช้า     |
| การ Query ข้อมูล | ใช้ SQL อย่างมืออาชีพ                | อาจ query ได้ช้าและผิดพลาด      |
| Data Analysis  | เข้าใจโครงสร้างและสามารถนำไปวิเคราะห์ | วิเคราะห์ได้จำกัดเพราะโครงสร้างไม่ดี |
| Security       | รู้จักสิทธิ์และการป้องกันข้อมูล            | เสี่ยงต่อข้อมูลรั่วไหล              |

