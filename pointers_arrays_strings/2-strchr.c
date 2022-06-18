#include "main.h"
/**
 * _strchr -  function that locates a character in a string.
 *
 * @s:qwd
 * @c:dwq
 * Return: s + i
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
