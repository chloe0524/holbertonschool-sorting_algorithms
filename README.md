
![ezgif-4-2dd4ba8237 (1)](https://github.com/chloe0524/holbertonschool-sorting_algorithms/assets/127857895/3b4c6097-c4e8-4345-9eec-b9f4bc46162c)

# :large_orange_diamond: C - Sorting algorithms & Big O
*by Chloe & Clement*

## :clipboard: Table of Contents


| Task                           | File          | Time Complexity Notations                                      |
|--------------------------------|---------------|-----------------------------------------------------------------|
| [Bubble sort](#small_orange_diamond-task-0-bubble-sort)    | [0-bubble_sort.c](./0-bubble_sort.c) | [``0-O``](https://github.com/chloe0524/holbertonschool-sorting_algorithms/blob/main/0-O):<br> O(n)    // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| [Insertion sort](#small_orange_diamond-task-1-insertion-sort) | [1-insertion_sort_list.c](https://github.com/chloe0524/holbertonschool-sorting_algorithms/blob/main/1-insertion_sort_list.c) | [``1-O``](https://github.com/chloe0524/holbertonschool-sorting_algorithms/blob/main/1-O):<br> O(n)    // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| [Selection sort](#small_orange_diamond-task-2-selection-sort) | [2-selection_sort.c](./2-selection_sort.c) | [``2-O``](./2-O):<br> O(n^2)  // Best case<br> O(n^2)  // Average case<br> O(n^2)  // Worst case  |
| [Quick sort](#small_orange_diamond-task-3-quick-sort)      | [3-quick_sort.c](./3-quick_sort.c) | [``3-O``](./3-O):<br> O(nlog(n)) // Best case<br> O(nlog(n))  // Average case<br> O(n^2) // Worst case  |

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

