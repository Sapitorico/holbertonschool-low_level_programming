#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int i;

		for (i = 0; i < *str; str += 2)
		{
			if (i % 2 ==0)
			_putchar (*str);
		}
		_putchar ('\n');
}
