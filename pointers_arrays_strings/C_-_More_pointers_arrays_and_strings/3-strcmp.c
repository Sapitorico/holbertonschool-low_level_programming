#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: stirng 1
 * @s2: stirng 2
 * Return: difference in ASCII or 0 if on equal numbers
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2) return *s1 - *s2;
        *s1++;
        *s2++;
    }
    return (0);
}
