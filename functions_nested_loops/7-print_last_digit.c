#include "main.h"
/**
 *  * print_last_digit - prints last digit of integer input
 *   * n: integer to modify
 *    *
 *     * Return: l
 */
int print_last_digit(int n)
{
	int n = n % 10;

	if (last_digit < 0)
	last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
