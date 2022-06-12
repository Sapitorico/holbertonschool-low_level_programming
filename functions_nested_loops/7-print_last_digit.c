#include "main.h"
/**
 *  * print_last_digit - prints last digit of integer input
 *   * n: integer to modify
 *    *
 *     * Return: last_digit
 */
int print_last_digiti(int n )
{
	int nv;

	if (n < 0)
{
	nv = -1 * (n % 10);
	_putchar(nv + '0');
	return (nv);
}
	else
{
	nv = n % 10;
	_putchar(nv + '0');
	return (nv);
}
}
