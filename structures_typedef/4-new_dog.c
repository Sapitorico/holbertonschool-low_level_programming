#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function create a new dog
 * @name: name a new dog
 * @age: age a new dog
 * @owner: owner a new dog
 * Retrun: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, n, o;
	dog_t *newd;

	if (name == 0 || owner == 0)
		return (NULL);
	newd = malloc(sizeof(dog_t));
	if (newd == 0)
	{
		return(NULL);
	}
	for (n = 0; name[n]; n++);
	newd->name = malloc(sizeof(char) * n);
	if (newd->name == 0)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		newd->name[i] = name[i];
	newd->age = age;
	for (o = 0; owner[o]; o++);
	newd->owner = malloc(sizeof(char) * o);
	if (newd->owner == 0)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		newd->owner[i] = owner[i];
	return (newd);
}
