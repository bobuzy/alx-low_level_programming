#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - This function initializes a variable of type struct dog
  * @d: The pointer to struct dog
  * @name: The name of the dog
  * @age: The age of the dog
  * @owner: The owner of the dog
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
