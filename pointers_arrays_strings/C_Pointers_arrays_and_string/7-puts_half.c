#include "main.h"
/**
 * puts_half - function that print the half string
 *
 * @str: string
 */
void puts_half(char *str)
{
    int n = (_strlen(str) - 1) / 2 + 1;

    while (str[n])
    {
        _putchar(str[n]);
        str[n++];
    }
    _putchar('\n');
}
