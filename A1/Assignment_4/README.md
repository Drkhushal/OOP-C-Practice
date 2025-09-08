# Practical No.04 - Dynamic Memory

## Topics Covered
- Static vs Dynamic Allocation
- References
- Pointers
- `new` and `delete` operators
- Dynamic memory for arrays/objects
- Shallow copy vs Deep copy
- Call by Value vs Call by Reference
- Common issues (dangling pointer, memory leak, double free)

---

## Dynamic Memory in C++
In C++, variables can be allocated in two ways:
1. **Static Allocation** – Memory decided at compile-time (fixed size).  
2. **Dynamic Allocation** – Memory decided at run-time (flexible size).  

Dynamic memory is useful when:
- Size of data is unknown before execution.  
- We want efficient memory usage.  

---

## References
- A **reference** is another name (alias) for a variable.  
- Must be initialized at declaration.  

**Syntax:**
```cpp
int x = 10;
int &ref = x; // ref is another name for x
````

---

## Pointers

* A **pointer** stores the memory address of another variable.

**Syntax:**

```cpp
int y = 20;
int *ptr = &y;
cout << *ptr; // prints value of y
```

---

## new Operator

* Used to allocate memory dynamically (on the heap).
* Returns a pointer.

**Syntax:**

```cpp
int *p = new int;
int *arr = new int[5];
```

---

## delete Operator

* Used to free memory allocated with `new`.
* Prevents memory leaks.

**Syntax:**

```cpp
delete p;
delete[] arr;
```

---

## Call by Value vs Call by Reference

| Feature          | Call by Value               | Call by Reference              |
| ---------------- | --------------------------- | ------------------------------ |
| Value Passed     | Copy of variable            | Reference (alias)              |
| Scope of Changes | Original unchanged          | Changes affect original        |
| Performance      | Less efficient (extra copy) | More efficient (no copy)       |
| Usage            | Safer, no side effects      | Used when modifications needed |

---

## 📌 Sample Code

```cpp
#include <iostream>
using namespace std;

// Function to swap using Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

// Function to swap using Call by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // --- References ---
    int x = 10;
    int &ref = x;
    cout << "Reference example: x = " << x << ", ref = " << ref << endl;

    // --- Pointers ---
    int y = 20;
    int *ptr = &y;
    cout << "Pointer example: y = " << y << ", *ptr = " << *ptr << endl;

    // --- Dynamic Memory Allocation ---
    int *arr = new int[3];
    arr[0] = 5; arr[1] = 10; arr[2] = 15;

    cout << "Dynamic Array: ";
    for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    // --- Call by Value vs Call by Reference ---
    int a = 30, b = 40;
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << " (unchanged)" << endl;

    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << " (swapped)" << endl;

    return 0;
}
```

---

## ✅ Learning Outcomes

* Learned difference between **references and pointers**.
* Understood how to use **new** and **delete** operators.
* Practiced **dynamic memory allocation for arrays**.
* Understood **call by value vs call by reference** in functions.
* Learned about **common memory issues** (dangling pointers, leaks).

---

## 🔗 File Link

👉 [Click here to view the `.cpp` code file](./dynamic_memory.cpp)
