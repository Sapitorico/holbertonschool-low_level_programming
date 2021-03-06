#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: start of value
 * @max: max of value
 * Return: a pinter array int
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == 0)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
