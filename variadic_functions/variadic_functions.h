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
	int (*f)(val_list)
} type_t;

/*prototypes*/
int print_char(args int);
int print_int(args int);
int print_float(args int);
int print_string(args int);

void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);
#endif/*MAIN_H*/
