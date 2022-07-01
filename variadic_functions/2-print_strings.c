#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function print strings
 * @separator: separators
 * @n: arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
			if (i != (n - 1) && separator)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(list);
}
