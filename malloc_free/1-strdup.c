#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - that returns a pointer to a newly allocated space in memory
 *
 *@str: is a strings
 *Return: return a pointer
 */
char *_strdup(char *str)
{
	int i, n;
	char *s;

	for (i = 0; str[i]; i++)
	if (str == 0)
		return (NULL);
			i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	if (i == 0)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
		return (s);
}
