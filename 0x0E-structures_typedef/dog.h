#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure for "dog" data type
* @name: string represents name of the dog
* @age: float represents age of the dog
* @owner: string represent name of the owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
