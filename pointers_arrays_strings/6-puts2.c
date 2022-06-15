#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pinter
 */
void puts2(char *str)
{
	int i;

		for (i = 0; i <*str; str += 2)
		{
			i++;
			_putchar (*str);
		}
		_putchar ('\n');
}
