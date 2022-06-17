#include "main.h"
/**
 * print_rev - funtion that prints a string, in reverse
 *
 *@s: pointer pointing to the str
 */
void print_rev(char *s)
{
	int end = 0;
	int anve;
	int rev;

	for (anve = 0; s[anve] != '\0'; anve++)
	{
		end++;
	}
	for (rev = (anve - 1); rev >= 0 ; rev--)
	{
	_putchar (s[rev]);
	}
	_putchar ('\n');
}
