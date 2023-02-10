#include "main.h"
/**
 * _memset - function that fills a memory whit constant chars
 *
 * @b: constant char
 * @n: size of memory fill
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
    int iterator = 0;

    while (iterator < n)
    {
        *(s + iterator) = b;
        iterator++;
    }
    return (s);
}
