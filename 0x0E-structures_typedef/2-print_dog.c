#include <stdio.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: variable of struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else if (d->age < 0)
	{
		printf("age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}
}
