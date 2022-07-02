#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - argument char
 * @int: var
 * Return: char
 */
int print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}
/**
 * print_int - argument int
 * @int: var
 * Return: int
 */
int print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - argument float
 * @int: var float
 * Return: float
 */
int print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - argument string
 * @int: var string
 * Return:string
 */
int print_string(va_list arg)
{
	char *str; 

	str = va_arg(arg, char *);
	if(!str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - function print anything
 * @format: argument format
 */
void print_all(const char * const format, ...)
{
	/*operation function structure*/
	va_list args;
	char *separator[] = {"",", "};

	f_types_t funcs_ls[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};

	int const1 = 0, const2 = 0;

	va_start(args, format);
	/* Initialize the argument list. */

	/*strcmp compare strings character by character*/
	while (format && format[const1])
	{
		const2 = 0;
		while (funcs_ls[const2].types)
		{
			if (format[const1] && funcs_ls[const2].types)
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
