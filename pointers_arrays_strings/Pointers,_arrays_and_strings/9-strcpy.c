#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed
 *
 *  @dest: pointer
 *  @src: pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
