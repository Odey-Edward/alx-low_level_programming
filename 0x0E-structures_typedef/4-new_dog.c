#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog.
* @name: the dog name
* @age: the dog age
* @owner: the dog owner
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = malloc(sizeof(char) * (len1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog->name);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
