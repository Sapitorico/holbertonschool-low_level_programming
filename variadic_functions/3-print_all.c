#include "variadic_functions.h"
/**
 * print_char - argument char
 * @int: var
 * Return: char
 */
int print_char(args int)
{
	printf("%c", va_arg(args int);
}
/**
 * print_int - argument int
 * @int: var
 * Return: int
 */
int print_int(args int)
{
	printf("%d", va_arg(args int);
}
/**
 * print_float - argument float
 * @int: var float
 * Return: float
 */
int print_float(args int)
{
	printf("%f", va_arg(args int);
}
/**
 * print_string - argument string
 * @int: var string
 * Return:string
 */
int print_string(args int)
{
	pirntf("%s", va_arg(args int);
}

/**
 * print_all - function print anything
 * @format: argument format
 */
void print_all(const char * const format, ...)
{
	type_t  stypes[] = {
		{"c" print_char},
		{"i" print_int},
		{"f" print_float},
		{"s" print_string},
		{NULL, NULL}
	};

	int i = 0;
	va_list args;

	va_start(args, format);
	/* Initialize the argument list. */

	/*strcmp compare strings character by character*/
	while (stypes[i].type != NULL)
	{
		if (!strcmp(stypes[i].type))
			return (stypes[i].f(args));
		i++;
	}

	printf("\n");
	va_end(list);
}
