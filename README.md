## :alarm_clock: C - Sorting algorithms & Big O

# Table of Contents

1. [Bubble sort](#bubble-sort)
2. [Insertion sort](#insertion-sort)
3. [Selection sort](#selection-sort)
4. [Quick sort](#quick-sort)

---
| File                   | Time Complexity Notations                                      |
|------------------------|-----------------------------------------------------------------|
| `0-O` (Bubble Sort)    | O(n)    // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| `1-O` (Insertion Sort) | O(n)    // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| `2-O` (Selection Sort) | O(n^2)  // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| `3-O` (Quick Sort)     | O(nlog(n)) // Best case<br> O(nlog(n))  // Average case<br> O(n^2) // Worst case  |

### :small_orange_diamond: Task 0: Bubble sort

- Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm.
- Prototype: `void bubble_sort(int *array, size_t size)`.
- Print the array after each swap.
- Write the big O notations for time complexity in the best, average, and worst cases in the file 0-O.



### :small_orange_diamond: Task 1: Insertion sort

- Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
- Prototype: `void insertion_sort_list(listint_t **list)`.
- Do not modify the integer `n` of a node; swap the nodes themselves.
- Print the list after each swap.
- Write the big O notations for time complexity in the best, average, and worst cases in the file 1-O.


### :small_orange_diamond: Task 2: Selection sort

- Write a function that sorts an array of integers in ascending order using the Selection sort algorithm.
- Prototype: `void selection_sort(int *array, size_t size)`.
- Print the array after each swap.
- Write the big O notations for time complexity in the best, average, and worst cases in the file 2-O.



### :small_orange_diamond: Task 3: Quick sort

- Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.
- Prototype: `void quick_sort(int *array, size_t size)`.
- Implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition being sorted.
- Print the array after each swap.
- Write the big O notations for time complexity in the best, average, and worst cases in the file 3-O.

