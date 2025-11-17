// Code

#include <iostream>
using namespace std;

/*
    Selection Sort Algorithm
    - Repeatedly selects the smallest element and places it at the beginning
    - Simple but slow for large datasets
    - Time Complexity: O(n^2)
*/

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        // Assume the current index has the minimum element
        int minIndex = i;

        // Find the actual minimum element in the unsorted part
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        // Swap the found minimum with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}

// Output

/*
    Enter size of array: 5
    Enter elements:
    5 2 8 1 4
    Sorted array:
    1 2 4 5 8 
    [Finished in 12.78s]
*/ 

/*
    Enter size of array: 6
    Enter elements:
    30 10 50 20 40 60 
    Sorted array:
    10 20 30 40 50 60 
    [Finished in 13.62s]
*/ 