#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - argument char
 * @arg: arguments
 * Return: char characer
 */
int print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	return (printf("%c", character));
}
/**
 * print_int - argument int
 * @arg: arguments
 * Return: int num
 */
int print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	return (printf("%d", num));
}
/**
 * print_float - argument float
 * @arg: arguments
 * Return: float num
 */
int print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	return (printf("%f", num));
}
/**
 * print_string - argument string
 * @arg: arguments
 * Return: string str
 */
int print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(nil)";
	}
	return (printf("%s", str));
}

/**
 * print_all - function print anything
 * @format: argument format
 *
 */
void print_all(const char * const format, ...)
{
	/*operation function structure*/
	va_list args;
	char *separator[] = {"", ", "};

	f_types_t funcs_ls[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	int const1 = 0, const2 = 0;

	va_start(args, format);
	/* Initialize the argument list. */

	while (format && format[const1])
	{
		const2 = 0;
		while (funcs_ls[const2].types)
		{
			/*compare strings character by character*/
			if (!strcmp(format, funcs_ls[const2].types))
			{
				printf("%s", *separator);
				funcs_ls[const2].f(args);
			}
			const2++;
		}
		const1++;
	}

	printf("\n");

	va_end(args);
}
