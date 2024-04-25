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
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
