#include "function_pointers.h"
/**
 * print_name - function print name
 * @name: char string
 * @f: pinter a string
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
