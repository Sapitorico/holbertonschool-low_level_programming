#include "dog.h"
/**
 * init_dog - initialize truct dog
 * @d: name
 * @name:struct name
 * @age: struct age
 * @owner: truct owner
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
