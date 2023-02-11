#include "main.h"
/**
 * factorial - function that calculate factorial of number
 *
 * @n: number
 * return: return factorial of number
 */
int factorial(int n)
{
    return (!n) ? 1 : (n < 0) ? -1 : n * factorial(n - 1);
}
