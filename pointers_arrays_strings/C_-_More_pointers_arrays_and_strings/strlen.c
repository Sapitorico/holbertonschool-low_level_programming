#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pinter to address of string
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count] != '\0'; count++)
		;
	return (count);
}