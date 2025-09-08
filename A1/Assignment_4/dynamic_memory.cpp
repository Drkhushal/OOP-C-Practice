// Practical No.04 - Dynamic Memory

// Notes
/*
    - References provide an alias for a variable.
    - Pointers store memory addresses and can be used for dynamic memory.
    - new operator: allocates memory at runtime.
    - delete operator: frees memory to prevent leaks.
    - Call by Value: function gets a copy (original unchanged).
    - Call by Reference: function gets alias (original can be modified).
*/

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
    int &ref = x; // ref is alias for x
    cout << "Reference example: x = " << x << ", ref = " << ref << endl;

    // --- Pointers ---
    int y = 20;
    int *ptr = &y; // pointer stores address of y
    cout << "Pointer example: y = " << y << ", *ptr = " << *ptr << endl;

    // --- Dynamic Memory Allocation ---
    int *arr = new int[3]; // allocate array of 3 ints
    arr[0] = 5; arr[1] = 10; arr[2] = 15;

    cout << "Dynamic Array: ";
    for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr; // free memory

    // --- Call by Value vs Call by Reference ---
    int a = 30, b = 40;
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << " (unchanged)" << endl;

    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << " (swapped)" << endl;

    return 0;
}

// Output

/*
    Reference example: x = 10, ref = 10
    Pointer example: y = 20, *ptr = 20
    Dynamic Array: 5 10 15 

    Before swapping: a = 30, b = 40
    Inside swapByValue: a = 40, b = 30
    After swapByValue: a = 30, b = 40 (unchanged)
    After swapByReference: a = 40, b = 30 (swapped)
    [Finished in 3.94s]
*/