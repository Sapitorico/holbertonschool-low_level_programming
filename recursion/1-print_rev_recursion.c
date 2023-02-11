#include "main.h"
#include "_putchar.c"
/**
 * print_rev_recursion - print string using recursion
 *
 * @s: stirng
 */
void _print_rev_recursion(char *s)
{
    if (*s) _print_rev_recursion(s + 1), _putchar(*s);
}
