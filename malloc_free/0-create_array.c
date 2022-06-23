#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - funtion create a array
 * @size: of a array
 * @c: char initialize array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return(NULL);
	s = malloc(sizeof(char) * size);
		if (s == NULL)
		{
			return(NULL);
		}
	for (i = 0; i < size; i++)
	{
	 	s[i] = c;
	}
			return(s);
}
