## ✅ Macro เเบบพื้นฐาน (Recap)
```
#define PI 3.14
#define SQUARE(x) ((x)*(x))
```
- แต่ปัญหาเกิดถ้าใช้แบบนี้:
```
SQUARE(x + 1)  // แปลกลายเป็น ((x + 1) * (x + 1)) ✅
SQUARE(i++)    // กลายเป็น ((i++) * (i++)) ❌ side effect 2 ครั้ง
```

## 🚀 Macro Function เเบบปลอดภัย
```
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```
- ข้อควรระวัง: side effect เช่น MAX(x++, y++) ทำให้เพิ่มค่าหลายครั้ง
- 💡 แนวทางที่ดีกว่า: ใช้ inline function ถ้าได้
```c
inline int max(int a, int b) {
    return a > b ? a : b;
}
```

## 🧩 Macro MultiLine statement หลายบรรทัด
- ใช้กับ Logic ที่อยากเขียนเเบบ block
```
#define LOG_INT(x) \
    do { \
        printf("Value of %s: %d\n", #x, x); \
    } while(0)
```
- → ป้องกันปัญหาเวลานำไปใช้ใน if/else โดยไม่ต้องใส่ {}

## 🔄 4. Macro แบบ conditional (platform dependent)
```
#ifdef _WIN32
    #define CLEAR_SCREEN system("cls")
#else
    #define CLEAR_SCREEN system("clear")
#endif
```
- ใช้ในการ build ข้าม platform ได้ง่าย (Windows vs Linux)


## 📦 5. Token Pasting (##) และ Stringify (#)
- 🔹 Token Pasting ## – รวมชื่อ
```
#define MAKE_FUNC(name) void name##_handler() { printf(#name " called\n"); }
MAKE_FUNC(login)   // สร้าง void login_handler() { ... }
```
-🔹 Stringify # – แปลง token เป็น string
```
#define SHOW(x) printf(#x " = %d\n", x)
SHOW(count)  // จะกลายเป็น printf("count = %d\n", count)
```