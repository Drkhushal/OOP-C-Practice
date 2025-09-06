// Practical No.03 - Operator Overloading

// Notes
/*
    - Operator overloading lets you redefine how operators work for user-defined types (classes).
    - Example: + operator can be overloaded to add two objects.
    - Requires a special function with the 'operator' keyword.
    - At least one operand must be a user-defined object.

    Syntax:
        <return_type> operator <symbol>(parameters) {
            // operator logic
        }
*/

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


// Output

/*
	c1 = 0 + 0i
	c2 = 3.5 + 2.5i
	c3 = 1.5 + 4.5i
	Result = 5 + 7i
	[Finished in 2.70s]
*/