# **Binary Search (Searching Algorithm)**

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

## **Conclusion**

Binary Search is a powerful and efficient searching technique used exclusively on **sorted arrays**. By eliminating half of the search space in each step, it achieves a time complexity of **O(log n)**, making it highly suitable for large datasets. Its simplicity, speed, and low memory usage make it one of the most widely used algorithms in databases, search engines, and system-level functions. Understanding Binary Search builds a strong foundation for more advanced algorithms and problem-solving techniques.

---