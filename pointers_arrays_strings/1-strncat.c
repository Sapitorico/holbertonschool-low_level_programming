#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer
 * @src: pinter
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		(*(dest + i)) = (*(src + j));
		i++;
		j++;

	}
	if (j < n)
		(*(dest + i)) = (*(src + j));

	return (dest);
}
