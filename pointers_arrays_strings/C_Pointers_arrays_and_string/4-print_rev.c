#include "main.h"
/**
 * print_rev - function that print a string in reverse
 *
 * @s: pointer to stirng
 */
void print_rev(char *s)
{
    int len = _strlen(s) - 1;

    while (s[len])
    {
        _putchar(s[len]);
        len--;
    }
    _putchar('\n');
}
