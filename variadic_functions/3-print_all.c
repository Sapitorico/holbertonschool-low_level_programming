#include "variadic_functions.h"
/**
 * print_char - argument char
 * @int: var
 * Return: char
 */
int print_char(va_list args)
{
	printf("%c", va_arg(args int));
}
/**
 * print_int - argument int
 * @int: var
 * Return: int
 */
int print_int(va_list args)
{
	printf("%d", va_arg(args int));
}
/**
 * print_float - argument float
 * @int: var float
 * Return: float
 */
int print_float(va_list args)
{
	printf("%f", va_arg(args double));
}
/**
 * print_string - argument string
 * @int: var string
 * Return:string
 */
int print_string(va_list args)
{
	char *a = va_arg(args char *);
	if(!a)
	{
		a = "(nil)"
	}
	printf("%s", a);
}

/**
 * print_all - function print anything
 * @format: argument format
 */
void print_all(const char * const format, ...)
{
	/*operation function structure*/
	type_t stypes[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{NULL, NULL}
	};

	int i = 0;
	va_list args;

	va_start(args, format);
	/* Initialize the argument list. */

	/*strcmp compare strings character by character*/
	while (format, stypes[i].type !=NULL)
	{
		if (!strcmp(format, stypes[i].type))
		{
			printf("%s", s);
			stypes[i].f(args);

		}
		i++;
	}

	printf("\n");
	va_end(args);
}
