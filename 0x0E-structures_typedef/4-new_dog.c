#include <stdio.h>
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

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	else
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;

		return (newDog);
	}
}
