#include <stdio.h>

void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      printf("\n");
      /**
       *Base case:
       *when we reach the end of the string ('\0'), print a new line
       *and return
       */
      return;
    }
  /**
   *print the current character and move to thr next character in the string
   *recursively call _puts_recursion with the rest of the string
   *
   */

  printf("%c", *s);
  _puts_recursion(s + 1);
}

int main()
{
  char *s = "Hello, World!";
  _puts_recursion(s);
  return 0;
}
