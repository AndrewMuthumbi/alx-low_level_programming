#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a given function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to be applied to each element
 *
 * Description:
 * This fncn iterates over each element of the array and applies the specified
 * action fncn to each element. It checks if the array and action pointers are
 * not NULL before proceeding. If either is NULL, the function returns without
 * performing any action. Otherwise, it loops thro @ element of the array,
 * calling the action function with the current element as an argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i; /* Declare an unsigned integer for loop iteration */

/* Check if array or action pointer is NULL */
if (array == NULL || action == NULL)
return; /* Return if either pointer is NULL */

/* Iterate over each element of the array */
for (i = 0; i < size; i++)
{
/* Apply action function to the current element */
action(array[i]);
}
}
