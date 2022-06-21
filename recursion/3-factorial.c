#include "main.h"
/**
 * _factorial - function that returns the factorial of a given number
 * @n: argumetno de l funcion
 * Retrun: returns the factorial of a given number -1
 */
int _factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * _factorial(n - 1));
			}
