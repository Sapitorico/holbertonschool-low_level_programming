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

	if (str == 0)
                return (NULL);
	while(str[i])
		i++;
	s = malloc(sizeof(char) * i + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		s[n] = str[n];
	}
	s[n] = '\0'
	return (s);
}
