#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next_node;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
next_node = current->next;
free(current);
count++;
if (next_node >= current)
{
*h = NULL;
return (count);
}
current = next_node;
}

*h = NULL;
return (count);
}
