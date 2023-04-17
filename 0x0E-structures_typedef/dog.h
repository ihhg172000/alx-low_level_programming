#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure for "dog" data type
* @name: string represents name of the dog
* @age: float represents age of the dog
* @owner: string represent name of the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
