#include "main.h"
/**
 * _puts2 - print all char of string
 *
 * @str: string
 */
void puts2(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str+=2;
    }
    _putchar('\n');
}
