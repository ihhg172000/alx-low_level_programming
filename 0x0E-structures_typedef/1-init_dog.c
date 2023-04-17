#include <stdlib.h>
#include "dog.h"

/**
* init_dog - function that initialize a variable of type struct dog
* @d: pointer to dog structure
* @name: string represents name of the dog
* @age: float represents age of the dog
* @owner: string represents name of the owner
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
