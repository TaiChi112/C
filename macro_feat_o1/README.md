## Macro เเบบพื้นฐาน (Recap)
```
#define PI 3.14
#define SQUARE(x) ((x)*(x))
```
- แต่ปัญหาเกิดถ้าใช้แบบนี้:
```
SQUARE(x + 1)  // แปลกลายเป็น ((x + 1) * (x + 1)) ✅
SQUARE(i++)    // กลายเป็น ((i++) * (i++)) ❌ side effect 2 ครั้ง
```

