#include "variadic_functions.h"
/**
 * sum_them_all - function returns the sum all list parameters
 * @n: value of parameters
 * Return: null
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);/*initialize the argument list*/

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);/*get the next argument value*/

	va_end(ap);
	return (sum);
}
