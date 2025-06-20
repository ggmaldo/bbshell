# 🧠 BBSHELL — Blue Box Shell

**Version:** 1.0  
**Author:** Gabriel Guerrero Maldonado  
**Language:** C++  
**Platform:** Linux / Unix-like systems

---

# 📦 What is BBSHELL?

**BBSHELL** is a lightweight, interactive command-line shell built from scratch in C++.  
It's designed to be simple, educational, and extendable — perfect for learning C++, working with math, and exploring scripting fundamentals.

---

# 🚀 Features (v1.0)

- ✅ Basic math operations: add, subtract, multiply, divide
- 🧠 Advanced functions: average, factorial, power, square root
- 🔣 Text tools: `echo`, ASCII conversion, repeat strings
- 📅 System utilities: current time, clear screen, rename shell user
- 🧮 Multi-argument math commands: `comadd`, `commul`, etc.
- 📈 Logical operations: even/odd, prime check, max/min
- 🎨 ASCII banner and user customization

---

# ⚙️ How to Use
## 🚀 Main File

> 💡 The main logic of BBSHELL is in [`main.cpp`](./main.cpp)

## Download
Clone the Repo
```
git clone https://github.com/ggmaldo/bbshell
```
Enter the File
```
cd bbshell
```

##  📥 Compile

```bash
g++ main.cpp -o bbshell
```
## ▶️ Run
```
./bbshell
```
## 📘 Help

Type help in the shell to see all available commands.

# Available Commands
## Basics

- whoami            → Show current shell username (default: bbshell)
- Swhoami <name>    → Change the shell username
- add x y           → Add two numbers
- res x y           → Subtract y from x
- mul x y           → Multiply two numbers
- div x y           → Divide x by y
- echo <text>       → Print the text
- clear             → Clear the screen
- exit              → Exit the shell

## Advanced Math
- pow x y           → x raised to the power y
- sqrt x            → Square root of x
- fact x            → Factorial of x
- avg x y z ...     → Average of multiple numbers
- fib n             → Fibonacci sequence up to n terms
- rand a b          → Random number between a and b
- ascii <char>      → Get ASCII value of a character
- count a b         → Count from a to b
- rpt n <text>      → Repeat a string n times

## Multi-Value Operations (Prefix: com)
- comadd x y ...    → Add multiple numbers
- comres x y ...    → Subtract all values from 0
- commul x y ...    → Multiply all numbers
- comdiv x y ...    → Divide all numbers in sequence
- commax x y ...    → Get the maximum value
- commin x y ...    → Get the minimum value

## Logical / Conditional
- even? x           → Check if a number is even or odd
- max? x y          → Return the greater number
- isprime x         → Check if a number is prime

## System & Info
- time              → Show current date and time
- info              → Show shell information
- IRONLANG          → Show a banner tribute to IronLang
- banner            → Show the BBSHELL ASCII banner
- help              → Show this help menu

# Coming in v1.1
Planned features for the next release:

Advanced string tools: reverse, len, startswith, endswith

File-based scripting (run file.bbs)

Shell variables and conditionals (let, if, loop)

User-defined commands: def greet : echo Hello

Plugin/module support (load custom libraries)

Colored text using ANSI escape codes

Custom prompt settings (setprompt)

# Author
Gabriel G. M.
[🚀 Visit My Profile](https://github.com/ggmaldo)

BBSHELL — where numbers, logic, and dreams run in the command line

