#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int i = 0;

	while(*(str + i))
		i++;

	for (i =0; str[i] != '\0'; i += 2)
	{
		_putchar (str[i]);
	}
		_putchar ('\n');
}
