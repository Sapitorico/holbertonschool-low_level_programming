#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: dwqd
 * @s2: wdqq
 * Return: 0
 * else
 * Retrun: s1 -s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
	return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
