#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dogs
* @d: the dog struct
*/
void free_dog(dog_t *d)
{
	free(d);
}
