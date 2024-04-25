#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Float representing the dog's age.
 * @owner: Pointer to a character array representing the owner's name.
 *
 * Description: This fnc creates a new dog with the provided nme,age,& owner.
 *       it allocates memory for the new dog structure and copies the provided
 *       name and owner strings into the allocated memory.
 *
 * Return: Pointer to the new dog structure if successful,
 *        NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

new_dog_ptr->name = strdup(name);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->owner = strdup(owner);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->age = age;

return (new_dog_ptr);
}
