#include "main.h"
/**
 * _puts - print a string follow a new lien
 *
 * @str: pointer to string
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
       *str++;
    }
    _putchar('\n');
}