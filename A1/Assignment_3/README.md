# Practical No.03 - Operator Overloading

## Topics Covered
- Operator overloading basics
- Rules and syntax
- Default constructor
- Parameterized constructor
- Operator overloading (`+` example)
- Member function (`display()`)

---

## Operator Overloading

### Definition
- **Operator overloading** is a form of **compile-time polymorphism**.  
- It means giving special meaning to operators (like `+`, `-`, `*`, etc.) when used with **user-defined types (classes)**.  
- Example: Adding two `Complex` numbers using `c1 + c2`.  

### Why Use It?
1. Improves **code readability**.  
2. Encapsulates behavior inside the class.  
3. Allows **multiple forms** of the same operator depending on operand types.  
4. Makes code more **maintainable**.  

---

## Rules / Key Points
- At least one operand must be a **user-defined object**.  
- Some operators **cannot** be overloaded (`::`, `.`, `.*`, `sizeof`, `?:`).  
- Operator overloading can be implemented as:  
  - **Member function**  
  - **Friend function**  

---

## Syntax

**Declaration (inside class):**
```cpp
return_type operator op(parameters);
````

**Definition (inside class):**

```cpp
return_type operator op(parameters) {
    // operator logic
}
```

**Definition (Outside Class)**

```cpp
return_type ClassName::operator+(const ClassName &obj) {
    // operator logic
}
```

---

## 📌 Sample Code

```cpp
#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Operator overloading for '+'
    Complex operator+(const Complex &other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;               // uses default constructor
    Complex c2(3.5, 2.5);     // parameterized
    Complex c3(1.5, 4.5);     // parameterized

    Complex result = c2 + c3; // operator+ used

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();
    cout << "Result = "; result.display();

    return 0;
}
```

---

## ✅ What We Did

* We created a class `Complex` with data members `real` and `imag`.
* We defined both a **default constructor** (initializing to `0`) and a **parameterized constructor** (initializing with given values).
* We overloaded the `+` operator so that it **adds the real parts and the imaginary parts** of two complex numbers.
* In the `main()` function, objects `c2` and `c3` are added, and the result is stored in `result`.
* This shows how operator overloading allows us to use `+` on objects in a natural way.

---

## ✅ Learning Outcomes

* Understood the concept of **operator overloading**.
* Learned to use **default and parameterized constructors** together.
* Practiced **overloading the `+` operator**.
* Observed how objects can interact like primitive data types.

---

## 🔗 File Link

👉 [Click here to view the `.cpp` code file](./operator_overloading.cpp)
