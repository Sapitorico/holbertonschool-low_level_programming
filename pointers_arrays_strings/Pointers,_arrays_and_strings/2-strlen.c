#include "main.h"
/**
 * _strlen - function that iterates through the array
 * @s: is a array
 * Return: largo
 */
int _strlen(char *s)
{
	int strlen;

	for (strlen = 0; s[strlen] != '\0';)
		++strlen;

	return (strlen);
}
