# Singly Linked List Operations

This directory contains C programs that implement various operations on a singly linked list data structure.

## Programs:

1. **0-print_listint.c**: This program defines a function `print_listint` that prints all the elements of a listint_t linked list.

2. **1-listint_len.c**: This program defines a function `listint_len` that returns the number of elements in a listint_t linked list.

3. **2-add_nodeint.c**: This program defines a function `add_nodeint` that adds a new node at the beginning of a listint_t linked list.

4. **3-add_nodeint_end.c**: This program defines a function `add_nodeint_end` that adds a new node at the end of a listint_t linked list.

5. **4-free_listint.c**: This program defines a function `free_listint` that frees a listint_t linked list.

6. **5-free_listint2.c**: This program defines a function `free_listint2` that frees a listint_t linked list and sets the head to NULL.

7. **6-pop_listint.c**: This program defines a function `pop_listint` that deletes the head node of a listint_t linked list and returns its data.

8. **7-get_nodeint.c**: This program defines a function `get_nodeint_at_index` that returns the nth node of a listint_t linked list.

9. **8-sum_listint.c**: This program defines a function `sum_listint` that returns the sum of all the data in a listint_t linked list.

10. **9-insert_nodeint.c**: This program defines a function `insert_nodeint_at_index` that inserts a new node at a given position in a listint_t linked list.

11. **10-delete_nodeint.c**: This program defines a function `delete_nodeint_at_index` that deletes the node at a given index in a listint_t linked list.

## Compilation and Execution:

To compile these programs, use the provided `gcc` command with the necessary flags:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o linked_list_operations