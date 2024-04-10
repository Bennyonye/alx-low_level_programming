# C - Search Algorithms

In this ALX project, I implemented various search algorithms and analyzed their time and space complexities. Below is a summary of the tasks and files involved:

## Tests 📋

* [tests](./tests): This folder contains test files for all tasks, provided by ALX.

## Helper Files 🤝

* [listint](./listint): This folder contains helper files for task 12, which involves a singly linked list jump search.
  * [create_list.c](./listint/create_list.c): C function to create a `listint_t` singly linked list.
  * [free_list.c](./listint/free_list.c): C function to free a `listint_t` singly linked list.
  * [print_list.c](./listint/print_list.c): C function to print the contents of a `listint_t` singly linked list.

* [skiplist](./skiplist): This folder contains helper files for task 13, which involves a singly skipped list jump search.
  * [create_skiplist.c](./skiplist/create_skiplist.c): C function to create a `skiplist_t` singly skipped list.
  * [free_skiplist.c](./skiplist/free_skiplist.c): C function to free a `skiplist_t` singly skipped list.
  * [print_skiplist.c](./skiplist/print_skiplist.c): C function to print the contents of a `skiplist_t` singly skipped list.

## Header File 📁

* [search_algos.h](./search_algos.h): Header file containing definitions and prototypes for all types and functions written for the project.

## Tasks 📜

* **0. Linear search**
  * [0-linear.c](./0-linear.c): Implement linear search algorithm to find a value in an array of integers.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): Implement binary search algorithm to find a value in a sorted array of integers.

* **2. Big O #0**
  * [2-O](./2-O): Document containing the worst case time complexity of linear search.

* **3. Big O #1**
  * [3-O](./3-O): Document containing the worst case space complexity of iterative linear search.

* **4. Big O #2**
  * [4-O](./4-O): Document containing worst case time complexity of binary search.

* **5. Big O #3**
  * [5-O](./5-O): Document containing the worst case space complexity of binary search.

* **6. Big O #4**
  * [6-O](./6-O): Document containing the space complexity of a given allocation algorithm.

* **7. Jump search**
  * [100-jump.c](./100-jump.c): Implement jump search algorithm to find a value in a sorted array of integers.

* **8. Big O #5**
  * [101-O](./101-O): Document containing the average case time complexity of jump search.

* **9. Interpolation search**
  * [102-interpolation.c](./102-interpolation.c): Implement interpolation search algorithm to find a value in a sorted array of integers.

* **10. Exponential search**
  * [103-exponential.c](./103-exponential.c): Implement exponential search algorithm to find a value in a sorted array of integers.

* **11. Advanced binary search**
  * [104-advanced_binary.c](./104-advanced_binary.c): Implement advanced binary search algorithm to find a value in a sorted array of integers.

* **12. Jump search in a singly linked list**
  * [105-jump_list.c](./105-jump_list.c): Implement jump search algorithm to find a value in a `listint_t` sorted singly linked list.

* **13. Linear search in a skip list**
  * [106-linear_skip.c](./106-linear_skip.c): Implement linear search algorithm to find a value in a `skiplist_t` sorted skipped linked list.

* **14. Big O #6**
  * [107-O](./107-O): Document containing the average time complexity of jump search in a singly linked list.

* **15. Big O #7**
  * [108-O](./108-O): Document containing the average time complexity of jump search in a sorted skipped linked list.

This project provided hands-on experience with various search algorithms and their complexities, contributing to a deeper understanding of algorithmic efficiency and implementation.
