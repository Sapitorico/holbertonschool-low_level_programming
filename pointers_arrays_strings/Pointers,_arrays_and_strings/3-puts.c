#include "main.h"
/**
 *_puts - function that prints a string, followed by a new line
 *
 *@str: is a pinter to a arrwayi
 *
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar (str[s]);
	}
	_putchar ('\n');
}
