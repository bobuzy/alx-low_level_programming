#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - Initialize name, age and owner variable for dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
