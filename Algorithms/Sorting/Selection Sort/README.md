# **Selection Sort (Sorting Algorithm)**

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

## **Conclusion**

Selection Sort is a simple and intuitive sorting algorithm that helps in understanding the fundamental concepts of comparison-based sorting. Although it has a higher time complexity of **O(n²)** and is not ideal for large datasets, it is valued for its ease of implementation and minimal number of swaps. Selection Sort is commonly used in teaching, small applications, and environments with restricted memory operations. Mastering this algorithm strengthens the basics of sorting and prepares learners for more efficient sorting techniques.

---