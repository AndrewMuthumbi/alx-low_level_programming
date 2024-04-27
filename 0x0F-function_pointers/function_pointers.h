#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/*Prototype for print_name function.*/
void print_name(char *name, void (*f)(char *));

/* Prototype for array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Prototype for int_index function */
int int_index(int *array, int size, int (*cmp)(int));

/* Prototype for op_add function */
int op_add(int a, int b);

/* Prototype for op_sub function */
int op_sub(int a, int b);

/* Prototype for op_mul function */
int op_mul(int a, int b);

/* Prototype for op_div function */
int op_div(int a, int b);

/* Prototype for op_mod function */
int op_mod(int a, int b);

/* Prototype for get_op_func function */
int (*get_op_func(char *s))(int, int);

/* Prototype for _putchar function */
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
