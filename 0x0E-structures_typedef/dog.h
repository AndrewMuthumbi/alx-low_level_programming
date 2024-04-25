#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Float representing the dog's age.
 * @owner: Pointer to a character array representing the owner's name.
 *
 * Description: This structure represents a dog with its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif /* DOG_H */
