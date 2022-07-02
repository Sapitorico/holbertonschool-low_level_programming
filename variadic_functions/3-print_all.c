#include "variadic_functions.h"
#include <string.h>
/**
 * print_char - argument char
 * @int: var
 * Return: char
 */
int print_char(va_list args)
{
	printf("%c", va_arg(args char));
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
	char *str = va_arg(args char *);
	if(!str)
	{
		str = "(nil)";
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
	fprint_t fn_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int i = 0;
	int const1 = 0, const2 = 0;
	char *sep[] = {"", ", "};
	va_list args;

	va_start(args, format);
	/* Initialize the argument list. */

	/*strcmp compare strings character by character*/
	while (format && format[const1] != NULL)
	{
		while (fn_list[const2].format)
		{
			if (format[const1] == fn_list[const2].format)
			{
				printf("%s", sep[i != '\0']);
				i += fn_list[const2].f(args);
				break;

			}
			const2++;
		}
		const1++;
	}

	printf("\n");
	va_end(args);
}
