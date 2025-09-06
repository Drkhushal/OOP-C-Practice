# Practical No.01 - Class and Objects

## Topics Covered
- Class
- Objects
- Constructors
- Destructors
- User-defined functions

---

## Class
- A class is like a **blueprint or template** for creating objects.  
- It groups together **data members** (variables declared inside class) and **member functions** (functions declared inside class).  

**Syntax:**
```cpp
class ClassName {
    // Access specifier (public, private, protected)
    int data; // Data members

    void functionName() {
        // Function body
    }
};
```

---

## Object

* An object is an **instance of a class**.
* While a class is just a definition, objects are **actual usable entities**.
* Each object has its own copy of data members.

**Syntax:**

```cpp
class ClassName {
    // class body
};

int main() {
    ClassName Obj1, Obj2; // two objects of ClassName
    return 0;
}
```

---

## Constructor

* A **special function** inside a class.
* Has the **same name** as the class.
* Executed **automatically** when an object is created.
* Used to **initialize data members**.

**Syntax:**

```cpp
class ClassName {
    int var;

public:
    ClassName() {
        // Constructor body
    }
};
```

---

## Destructor

* A **special function** with the same name as the class but starts with a **tilde (\~)**.
* Executed automatically when an object is **destroyed (goes out of scope)**.
* Used for **cleanup tasks** (freeing memory, closing files, etc.).

**Syntax:**

```cpp
class ClassName {
public:
    ~ClassName() {
        // Cleanup code (if needed)
    }
};
```

---

## User-defined Functions

* Functions written by the **programmer inside a class**.
* They perform specific tasks (e.g., displaying data, doing calculations).

**Syntax:**

```cpp
class ClassName {
public:
    void functionName();  // Function declaration
};

// Function definition outside the class
void ClassName::functionName() {
    // Function body
}
```

---

## 📌 Sample Code

### 🔗 File Link

👉 [Click here to view the `sample_code.cpp` code file](./class_objects.cpp)

