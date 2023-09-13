#include <unistd.h>


/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar\n";
    write(STDOUT_FILENO, str, sizeof(str) - 1); // sizeof(str) includes the null terminator, so subtract 1
    return (0);
}
