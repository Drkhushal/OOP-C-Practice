// Practical No.05 - Function Types, Friend Class

// Notes
/*
    - this pointer: Refers to the current object of the class.
    - inline function: Suggests compiler to expand the function code at the call site.
    - static member function: Belongs to the class, not to objects. Can access only static members.
    - friend class: A class that is allowed to access private/protected members of another class.
*/

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

// Output

/*
    Student: Swapnil, Marks: 85
    Student: Mansi, Marks: 90
    Total students: 2
    Teacher sees -> Swapnil has marks 85
    [Finished in 2.39s]
*/