#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Float representing the dog's age.
 * @owner: Pointer to a character array representing the owner's name.
 *
 * Description: This function initializes the members of a struct dog variable
 *              with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
