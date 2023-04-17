#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - function that creates a new dog
* @name: string represents name of the dog
* @age: string represents age of the dog
* @owner: string represents name of the owner
*
* Return: pointer to dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	_name = malloc((strlen(name) + 1) * sizeof(char));
	if (_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_name = strcpy(_name, name);

	_owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (_owner == NULL)
	{
		free(dog);
		free(_name);
		return (NULL);
	}

	_owner = strcpy(_owner, owner);

	dog->name = _name;
	dog->age = age;
	dog->owner = _owner;

	return (dog);
}
