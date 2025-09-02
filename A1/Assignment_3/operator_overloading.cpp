// Practical No.03 - Operator Overloading

// Notes

/*
	Operator overloading lets you redefine how operators work for user-defined types (classes).
	Example: + operator can be overloaded to add two objects.
	Requires a special function with operator keyword.
	
	syntax: 
		<returntype> operator <symbol>(){
			<code>
		}
*/

// Sample Code

#include <iostream>
using namespace std;

class bank {

	int count;

public:

	bank(){
		count = 10;
	}

	void operator ++(){
		count++;
	}

	void display(){
		cout << "count after operator overloading: " << count << endl;
	}
};

int main(int argc, char const *argv[])
{
	bank user;
	++user;
	user.display();

	return 0;
}