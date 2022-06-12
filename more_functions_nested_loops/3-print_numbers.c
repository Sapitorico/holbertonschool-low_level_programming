#include "main.h"
/**
 * print_number - prints 0..9
 *
 * _putchar - pint c
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
