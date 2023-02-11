#include "main.h"
#include "_putchar.c"
/**
 * _puts_recursion - print a string followed a new line using recursion
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
    (*s) ? _putchar(*s), _puts_recursion(s + 1) : _putchar(10);
}
