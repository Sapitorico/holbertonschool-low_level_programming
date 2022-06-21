#include "main.h"
/**
 * _srqt_checker - funtion check
 *@n: number is a compre
 *@base: base the numbre
 *Return: wqedqw
 */
int _srqt_checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (_srqt_checker(n + 1, base));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: does not have a natural square root
 * Return: he function should return -1
 */
int _sqrt_recursion(int n)
{
	return (_srqt_checker(1, n));
}
