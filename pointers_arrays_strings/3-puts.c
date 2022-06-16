#include "main.h"
/**
 *_puts - function that prints a string, followed by a new line
 *
 *@str: is a pinter to a arrwayi
 *
 */
void _puts(char *str)
{
	if (!str)
		return;
	while (*str)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
