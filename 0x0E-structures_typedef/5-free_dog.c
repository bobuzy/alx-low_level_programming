#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - This function free the memory allocated for a strucct dog
  * @d: The pointer to struct dog to free
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
