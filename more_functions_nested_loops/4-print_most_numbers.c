#include "main.h"
/**
 *print_most_numbers - prints 01356789\n
 *
 *Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
{
	if (!(c == '2' || c == '4'))
	_putchar(c);
}
	_putchar('\n');
}
