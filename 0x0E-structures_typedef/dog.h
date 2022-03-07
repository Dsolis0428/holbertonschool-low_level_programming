#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog description.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} description;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif