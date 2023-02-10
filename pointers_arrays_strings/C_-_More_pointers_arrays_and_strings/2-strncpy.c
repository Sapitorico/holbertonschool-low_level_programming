#include "main.h"
/**
 * _strncpy - function that copies n char of string
 *
 * @dest: destination string copy
 * @src: stirng to copy
 * @n: number of characters to copy
 * Return: return a pointer to stirng copy
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *copy = dest;
    int iterator = 0;

    while ((iterator < n) && (*copy++ = *src++))
        iterator++;
    while (iterator < n)
        dest[iterator] = 0, iterator++;
    return (dest);
}
