#include "main.h"
/**
 *print_most_numbers - prints 01356789\n
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
{
	if (i == 50 || i == 52)
{
	i++;
	continue;
}
	_putchar(i++);
}
	_putchar('\n');
}
