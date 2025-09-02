// Practical No.01 - Class and Objects

// Notes:

/*
	- Class is a user-defined blueprint that defines attributes (data members) and behaviors (member functions).
	- Object is an instance of a class.
	- Constructor is a special function that initializes objects automatically when created.
	- Destructor is a special function that is called automatically when the object goes out of scope (used to free resources).
	- User-defined functions are normal member functions inside a class that perform specific tasks.
*/

// Sample Code

#include<iostream>
using namespace std;

// Class Name Bank Created
class Bank {
    
    // Class Data Members (Variable) : Default in Private Block
    long long int accno;

public:

    // Class Member Function Declaration
    void get();
    void display();
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