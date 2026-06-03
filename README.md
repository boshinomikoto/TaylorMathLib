# 📐 Taylor Math Library
> A lightweight static C++ library implementing trigonometric and inverse trigonometric functions via Taylor series expansion — without relying on `<cmath>` for the core computations.

---
## ✨ Features

| Function | Description |
|----------|-------------|
| `sinnx(x)` | sin(x) via Taylor series |
| `cosnx(x)` | cos(x) via Taylor series |
| `tgnx(x)` | tan(x) = sin(x) / cos(x) |
| `сtgnx(x)` | cot(x) = 1 / tan(x) |
| `arcsinnx(x)` | arcsin(x), domain: [-1, 1] |
| `arccosnx(x)` | arccos(x) = π/2 − arcsin(x) |
| `arctgnx(x)` | arctan(x) with reduction for \|x\| > 0.5 |
| `arcсtgnx(x)` | arccot(x) = π/2 − arctan(x) |
| `power(a, n)` | Fast integer exponentiation |

**Precision:** series iterate until `|term| < 1e-15`

---

## 📁 Project Structure

```
Taylor/
│
├── test.cpp                 # Example application
├── include/
│   └── taylor.h             # Public interface
├── lib/
│   ├── libtaylor.a          # Linux static library
│   └── taylor.lib           # Windows static library
└── README.md                # Documentation
```

---

## 🔨 Building

### 🐧 Linux / macOS

**Compile into a static library:**
```bash
g++ -c taylor.cpp -o taylor.o -std=c++17 -O2
ar rcs lib/libtaylor.a taylor.o
```

**Link with your project:**
```bash
g++ test.cpp -Iinclude -Llib -ltaylor -o app -std=c++17
./app
```

---

### 🪟 Windows (MSVC)

**Compile into a static library:**
```cmd
cl /c taylor.cpp /O2 /EHsc /Fo:taylor.obj
lib /OUT:lib\taylor.lib taylor.obj
```

**Link with your project:**
```cmd
cl test.cpp /I include lib\taylor.lib /EHsc /Fe:app.exe
app.exe
```

---

### 🪟 Windows (MinGW / g++)

```bash
g++ -c taylor.cpp -o taylor.o -std=c++17 -O2
ar rcs lib/libtaylor.a taylor.o
g++ test.cpp -Iinclude -Llib -ltaylor -o app.exe -std=c++17
```

---

---

## ⚠️ Notes

- `arcsinnx(x)` returns `NAN` if `|x| > 1`
- `сtgnx(x)` is undefined at multiples of π (division by zero)
- `arctgnx(x)` uses the identity `arctan(x) = 2·arctan(x / (1 + √(1 + x²)))` for `|x| > 0.5` to improve convergence
- The constant `PI` is defined with 75 significant digits for maximum precision

---

