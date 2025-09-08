# Practical No.05 - Function Types, Friend Class

## Topics Covered
- Class and objects (recap)
- `this` pointer
- Inline function
- Static member function
- Friend class

---

## this Pointer
- Refers to the **current object** inside a class.  
- Used when local variable names are the same as data members.  

**Example:**
```cpp
this->marks = m;
````

---

## Inline Function

* Defined inside the class using `inline`.
* Suggests compiler to expand code instead of making a function call (faster).
* Best for **small functions**.

---

## Static Member Function

* Belongs to the **class, not to individual objects**.
* Can access only **static data members**.
* Called using `ClassName::functionName()`.

---

## Friend Class

* A class that can access **private/protected members** of another class.
* Declared using `friend class ClassName;`.

---

## 📌 Sample Code

```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
    static int count; // static data member

public:
    // Constructor
    Student(string n, int m) {
        this->name = n;   // using 'this' pointer
        this->marks = m;
        count++;          // increase student count
    }

    // Inline function (defined inside class)
    inline void display() {
        cout << "Student: " << name << ", Marks: " << marks << endl;
    }

    // Static function
    static void totalStudents() {
        cout << "Total students: " << count << endl;
    }

    // Friend class declaration
    friend class Teacher;
};

// Definition of static data member
int Student::count = 0;

class Teacher {
public:
    void showStudent(Student s) {
        // Teacher can access private members of Student because of 'friend class'
        cout << "Teacher sees -> " << s.name << " has marks " << s.marks << endl;
    }
};

int main() {
    // Create objects
    Student s1("Swapnil", 85);
    Student s2("Mansi", 90);

    // Display student info
    s1.display();
    s2.display();

    // Show total number of students using static function
    Student::totalStudents();

    // Friend class access
    Teacher t1;
    t1.showStudent(s1);

    return 0;
}
```

---

## ✅ Learning Outcomes

* Learned how the **this pointer** is used inside class functions.
* Practiced **inline functions** for small, frequent tasks.
* Understood **static member functions** and their usage.
* Demonstrated how a **friend class** can access private data.

---

## 🔗 File Link

👉 [Click here to view the `.cpp` code file](./function_types_friend.cpp)


