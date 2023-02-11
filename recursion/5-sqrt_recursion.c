#include "main.h"
/**
 * _sqrt_recursion - calculate a square root of a number
 *
 * @n: number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
    return (_sqrt(n, 0));
}

/**
 * _sqrt - calculates the square root of a number and returns it
 * @n: number
 * @i: square root
 *
 * Return: root of number or - 1 if not found
 */
int _sqrt(int n, int i)
{
	return (i * i == n) ? i : (i * i > n) ? -1 : _sqrt(n, i + 1);
}
