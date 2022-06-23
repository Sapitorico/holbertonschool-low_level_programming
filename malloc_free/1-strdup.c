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
	int i = 0, n;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while(str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
