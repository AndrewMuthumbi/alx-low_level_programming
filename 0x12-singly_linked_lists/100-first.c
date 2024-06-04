#include <stdio.h>

/**
 * __attribute__((constructor)) first - Prints a message before main function
 * is executed
 */
void __attribute__((constructor)) first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
