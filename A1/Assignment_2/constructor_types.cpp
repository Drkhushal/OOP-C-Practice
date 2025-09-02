// Practical No.02 - Constructor Types

// Notes

/*
	It is a special member function becoz it's name is same as the class name
	we declare it in public block only 
	they have no return type as they don't return anything 

	Types of constructors in C++:

		- Default Constructor – no parameters, initializes default values.
		- Parameterized Constructor – takes arguments to initialize.
		- Copy Constructor – creates a copy of another object.

*/

// Sample Code

#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                 // Default
    Student s2("Mansi", 19);    // Parameterized
    Student s3 = s2;            // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
