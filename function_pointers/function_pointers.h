#ifndef function_pointer_h
#define function_pointer_h
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

#endif/*function_pinter_h*/
