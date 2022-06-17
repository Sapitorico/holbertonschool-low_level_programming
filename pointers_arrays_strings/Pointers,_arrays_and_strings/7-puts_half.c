#include "main.h"
/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int i = 0;
	int div;

	while (*(str + i))
		i++;
	div = i / 2;
	if (i % 2)

		div += 1;
	while (div < i)
	{
		_putchar (*(str + div));
		div++;
	}
	_putchar ('\n');
}
