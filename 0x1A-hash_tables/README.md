# 0x1A. C - Hash tables

#### C Algorithm Data structure

## Resources
### Read or watch:

* What is a HashTable Data Structure - Introduction to Hash Tables , Part 0
* Hash function
* Hash table
* All about hash tables
* why hash tables and not arrays

## General Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

1. What is a hash function
2. What makes a good hash function
3. What is a hash table, how do they work and how to use them
4. What is a collision and what are the main ways of dealing with collisions in the context of a hash table
5. What are the advantages and drawbacks of using hash tables
6. What are the most common use cases of hash tables

Copyright - Plagiarism
* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.


## General Requirements

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are allowed to use the C standard library
9. The prototypes of all your functions should be included in your header file called hash_tables.h
10. Don’t forget to push your header file
11. All your header files should be include guarded

## More Info

### Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here (not mandatory).

### Data Structures
Please use these data structures for this project:


Explain
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
Tests
We strongly encourage you to work all together on a set of tests

@Bennyonye