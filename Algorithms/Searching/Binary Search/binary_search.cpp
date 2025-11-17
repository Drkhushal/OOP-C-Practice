// Code

#include <iostream>
using namespace std;

/* 
    Binary Search Algorithm
    - Works only on sorted arrays
    - Repeatedly divides the search interval in half
    - Time Complexity: O(log n)
*/

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the middle element is the key
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore the left half
        else if (arr[mid] < key)
            low = mid + 1;

        // If key is smaller, ignore the right half
        else
            high = mid - 1;
    }

    return -1; // Key not found
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found.\n";

    return 0;
}

// Output

/*
    Enter size of array: 6
    Enter sorted elements:
    10 20 30 40 50 60 
    Enter element to search: 40
    Element found at index: 3
    [Finished in 13.24s]
*/ 

/*
    Enter size of array: 5
    Enter sorted elements:
    2 4 6 8 10
    Enter element to search: 7
    Element not found.
    [Finished in 9.45s]
*/ 