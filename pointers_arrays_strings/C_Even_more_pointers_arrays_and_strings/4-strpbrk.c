#include "main.h"
#include "2-strchr.c"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: substring to search
 * Return: pointer to the matches bytes in accept or NULL if no such byte found
 */
char *_strpbrk(char *s, char *accept)
{
    if (!s || !accept)
        return (NULL);
    while (*s)
    {
        if (_strchr(accept, *s)) return (s);
        *s++;
    }
    return (NULL);
}
