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

```cpp
#include<iostream>
using namespace std;

// Class Name Bank Created
class Bank {
    
    // Class Data Members (Variable) : Default in Private Block
    long long int accno;

public:
    // Default Constructor
    Bank() {
        cout << "Bank object created successfully!" << endl;
        accno = 0;
    }

    // Class Member Function Declaration
    void get();
    void display();

    // Destructor
    ~Bank() {
        cout << "Bank object destroyed!" << endl;
    }
};

// Class Member Function Defination with Scope Resolution (::) Operator
void Bank :: get(){
    cout << "Enter the Account Number : " ;
    cin >> accno;
}

void Bank :: display(){
    cout << "Your Account Number : " << accno << endl;
}

int main(){

    // An Instance (Object) of class Bank named user is created
    Bank user; 

    // Object calling member functions of the class
    user.get();
    user.display();

}
```

---

## 🔗 File Link

👉 [Click here to view the `sample_code.cpp` code file](./class_objects.cpp)

