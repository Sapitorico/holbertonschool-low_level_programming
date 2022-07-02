#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct f_types - string struct
 * @types: the op
 * @f: the function associated
 */
typedef struct f_types
{
	char *types;
	int (*f)(va_list arg);
} f_types_t;

/*prototypes*/
int print_char(va_list arg);
int print_int(va_list arg);
int print_float(va_list arg);
int print_string(va_list arg);

void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

#endif/*VARIADIC_FUNCTIONS_H*/
