#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to free.
 *
 * Description: This function frees the memory allocated for a dog structure.
 *           It first frees the memory allocated for the name and owner strings
 *           within the structure, and then frees the memory allocated for the
 *           structure itself.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free memory allocated for name and owner strings */
free(d->name);
free(d->owner);
/* Free memory allocated for the dog structure */
free(d);
}
}
