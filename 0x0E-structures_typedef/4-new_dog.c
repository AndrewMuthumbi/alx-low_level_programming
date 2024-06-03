#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
    int c = 0;

    for (; s[c] != '\0'; c++)
        ;

    return (c);
}

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    new_dog->name = malloc(sizeof(char) * (name_len + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    _strcpy(new_dog->name, name);
    new_dog->age = age;
    _strcpy(new_dog->owner, owner);

    return (new_dog);
}
