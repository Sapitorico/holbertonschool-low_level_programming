#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pinter
 */
void puts2(char *str)
{
	int i;

		for (i = 0; i < str[i]; i += 2)
		{
			_putchar (str[i]);
		}
		_putchar ('\n');
}
