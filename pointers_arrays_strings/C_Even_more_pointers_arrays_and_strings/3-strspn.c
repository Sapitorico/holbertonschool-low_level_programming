#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - get a length of prefix substring
 *
 * @s: string
 * @accept: substring
 * Return: len of prefix of substring or 0 not found
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;

    if (!s || !accept)
        return (len);
    while (*s && _strchr(accept, *s++)) len++;
    return (len);
}
