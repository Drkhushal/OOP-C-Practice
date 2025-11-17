# **📘 Searching & Sorting – Notes**

# **1. Binary Search (Searching Algorithm)**

## **Definition**

Binary Search is an efficient algorithm used to search an element in a **sorted array** by repeatedly dividing the search space into halves.
It eliminates half of the remaining elements after each comparison.

---

## **Algorithm Steps**

1. Start with two indices: `low = 0` and `high = n - 1`.
2. Find the middle index: `mid = (low + high) / 2`.
3. Compare `arr[mid]` with the key:

   * If equal → element found
   * If key > arr[mid] → search in the right half
   * If key < arr[mid] → search in the left half
4. Repeat until `low > high`.
5. If no match is found, return -1.

---

## **Dry Run Example**

Array: `10 20 30 40 50 60`
Key: `40`

| Step | low | high | mid | arr[mid] | Compare | Action     |
| ---- | --- | ---- | --- | -------- | ------- | ---------- |
| 1    | 0   | 5    | 2   | 30       | 40 > 30 | Move right |
| 2    | 3   | 5    | 4   | 50       | 40 < 50 | Move left  |
| 3    | 3   | 3    | 3   | 40       | Match   | Found      |

**Output:** Key found at index 3

---

## **Example**

Input:
`10 20 30 40 50`
Key: `40`

Output:
`Element found at index 3`

---

## **Time Complexity**

* **Best Case:** O(1)
* **Average Case:** O(log n)
* **Worst Case:** O(log n)

## **Space Complexity**

* O(1)

---

## **Advantages**

* Very efficient for large datasets
* Requires few comparisons
* Simple and fast

## **Disadvantages**

* Requires sorted array
* Not suitable for linked lists unless converted

---

## **Real-Life Applications**

* Searching names in alphabetical lists
* Searching in dictionaries and phonebooks
* Finding values in large sorted databases
* Used in C++ STL functions like `std::binary_search()`
* Used in games (guess the number)

---

---

# **2. Selection Sort (Sorting Algorithm)**

## **Definition**

Selection Sort is a simple comparison-based sorting algorithm.
It repeatedly selects the **minimum element** from the unsorted part of the array and swaps it with the element at the current index.

---

## **Algorithm Steps**

1. Start from index `i = 0`.
2. Find the minimum element in the unsorted part.
3. Swap it with the element at index `i`.
4. Move to the next index and repeat until the list is sorted.

---

## **Dry Run Example**

Array: `5 2 8 1 4`

| Pass | Unsorted Portion | Minimum | Swap       | Result    |
| ---- | ---------------- | ------- | ---------- | --------- |
| 1    | 5 2 8 1 4        | 1       | swap 1 & 5 | 1 2 8 5 4 |
| 2    | 2 8 5 4          | 2       | no swap    | 1 2 8 5 4 |
| 3    | 8 5 4            | 4       | swap 4 & 8 | 1 2 4 5 8 |
| 4    | 5 8              | 5       | no swap    | 1 2 4 5 8 |

**Output:** `1 2 4 5 8`

---

## **Example**

Input:
`30 10 50 20 40`

Output:
`10 20 30 40 50`

---

## **Time Complexity**

* **Best Case:** O(n²)
* **Average Case:** O(n²)
* **Worst Case:** O(n²)

## **Space Complexity**

* O(1)

---

## **Advantages**

* Very easy to understand
* Works well for small datasets
* Performs minimal number of swaps

## **Disadvantages**

* Very slow for large datasets
* Always O(n²) regardless of input
* Not stable (does not preserve order of equal elements)

---

## **Real-Life Applications**

* Teaching fundamental sorting concepts
* Small datasets where memory writes are costly
* Embedded systems where simplicity matters
* Situations needing minimal swaps

---

---

# **3. Conclusion**

Binary Search and Selection Sort are two fundamental algorithms in computer science.

Binary Search is an efficient O(log n) searching technique ideal for **large, sorted** datasets.
Selection Sort is simple but inefficient for large data due to its **O(n²)** time complexity.

Understanding these algorithms helps build strong foundations in Data Structures and improves problem-solving skills in computer programming.

---