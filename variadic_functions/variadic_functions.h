#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct fprint - string struct
 * @format: the op
 * @f: the function associated
 */
typedef struct fprint
{
	char *fprint;
	void (*f)(val_list arg);
} fprint_t;

/*prototypes*/
int print_char(va_list args);
int print_int(va_list args);
int print_float(va_list args);
int print_string(va_list args);

void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

#endif/*VARIADIC_FUNCTIONS_H*/
