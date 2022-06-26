#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: element of memeory
 * @size: value in bytes of element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *marray;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	marray = malloc(sizeof(int) * size);
		if (marray == 0)
			return (NULL);
	while (i < nmemb)
	{
		marray[i] = 0;
		i++;
	}
	return (marray);
}
