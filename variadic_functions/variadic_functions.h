#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct type - string struct
 * @type: the op
 * @f: the function associated
 */
typedef struct type
{
	char *type;
	void (*f)(val_list)
} type_t;

/*prototypes*/
int print_char(va_list args);
int print_int(va_list args);
int print_float(va_list args);
int print_string(va_list args);

void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);
#endif/*MAIN_H*/
