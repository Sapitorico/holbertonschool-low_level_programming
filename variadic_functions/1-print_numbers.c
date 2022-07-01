#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers -  function that prints numbers
 * @separator: separators
 * @n: value of list arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);/*incilaiza la lista*/

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));/*add integers to list*/
		if (separator)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
