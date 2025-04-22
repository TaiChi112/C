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

## 🧙‍♂️ 6. X Macro Pattern (ขั้นเทพ ใช้สร้าง enum/function อัตโนมัติ)
- ใช้ list เดียวกันสร้าง enum, string, function ได้
```
// Step 1: define macro list
#define OPERATION_LIST \
    X(ADD) \
    X(SUBTRACT) \
    X(MULTIPLY) \
    X(DIVIDE)

// Step 2: สร้าง enum
#define X(op) OP_##op,
typedef enum { OPERATION_LIST } Operation;
#undef X

// Step 3: สร้างชื่อ
#define X(op) #op,
const char* operation_names[] = { OPERATION_LIST };
#undef X

// Step 4: สร้าง handler function
#define X(op) void handle_##op() { printf("Handling "#op"\n"); }
OPERATION_LIST
#undef X
```
- 🔥 ใช้ได้ดีเมื่อมีการ “จัดกลุ่มข้อมูลซ้ำหลายที่”



## 🛡️ 7. ข้อควรระวัง macro ระดับสูง
| จุดอันตราย        | แนวทางป้องกัน                     |
| --------------- | ------------------------------- |
| Side effect     | หลีกเลี่ยง ++, -- ใน macro         |
| Debug ยาก       | ใช้ __FILE__, __LINE__ ช่วย trace |
| ใช้เยอะอ่านยาก    | เปลี่ยนเป็น inline function เมื่อได้  |
| ไม่มี type safety | macro ไม่เช็คชนิดข้อมูล              |

## 🔜 8. เตรียมตัวสู่ Rust Macro
| ประเภท Rust Macro | แนวคิดจาก C                               |
| ----------------- | ---------------------------------------- |
| macro_rules!      | เหมือน X macro + function macro           |
| Procedural macro  | คล้ายกับ C preprocessor + codegen          |
| Derive macro      | สร้าง impl อัตโนมัติ เหมือน pattern generator |
