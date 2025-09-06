# Practical No.02 - Constructor Types

## Topics Covered
- Constructor basics
- Rules of constructors
- Uses of constructors
- Default Constructor
- Parameterized Constructor
- Copy Constructor
- Destructor
- Member functions

---

## Constructor
- A **constructor** is a special member function in a class.  
- It is automatically called when an object of the class is created.  
- Its purpose is to **initialize the data members of the class**.  

**Syntax:**
```cpp
class ClassName {
public:
    ClassName() {
        // constructor body
    }
};
````

---

## Rules of Constructors

* The constructor has the **same name as the class**.
* It has **no return type** (not even `void`).
* Usually declared in the **public** section.
* Automatically called when an object is created.

---

## Uses of Constructors

* Automatically initialize objects.
* Reduce redundant code (no need for separate init functions).
* Provide flexibility via **constructor overloading**.
* Enable safe object copying (**copy constructor**).
* Can be used for **dynamic memory allocation** during object creation.
* Help enforce **valid data & encapsulation**.

---

## Types of Constructors

### 1. Default Constructor

* A constructor with **no parameters**.
* Initializes data members with default values.

**Syntax:**

```cpp
class ClassName {
public:
    ClassName() {
        // initialization code
    }
};
```

---

### 2. Parameterized Constructor

* A constructor that takes **arguments**.
* Allows initializing objects with specific values.

**Syntax:**

```cpp
class ClassName {
public:
    ClassName(int a, float b) {
        // initialization code
    }
};
```

---

### 3. Copy Constructor

* Creates an object by **copying data from another object** of the same class.
* Used when:

  * Initializing one object from another.
  * Passing objects to functions by value.
  * Returning objects from functions.

**Syntax:**

```cpp
class ClassName {
public:
    ClassName(ClassName &obj) {
        // copy values from obj
    }
};
```

---

## Destructor

* A special function of a class.
* Its job is to **destroy objects** when they go out of scope.
* Used to **free resources** (memory, files, etc.).
* Same name as the class but prefixed with **tilde (\~)**.
* Has **no return type**.

**Syntax:**

```cpp
class ClassName {
public:
    ~ClassName() {
        // cleanup code
    }
};
```

---

## ✅ Learning Outcomes

* Learned the **three types of constructors** in C++.
* Understood how constructors are **automatically invoked** at object creation.
* Understood the role of the **destructor** in object lifecycle.
* Practiced constructor **overloading** and **member functions**.

---

## 📌 Sample Code

---

## 🔗 File Link

👉 [Click here to view the `.cpp` code file](./constructor_types.cpp)


