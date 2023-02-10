#include "main.h"
/**
 * _memcpy - function that copies a n characters
 *
 * @dest: pointer to new string of characters copies
 * @src: stirng at copies
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *copy = dest;
    int iterator = 0;

    while ((*copy++ = *src++) && iterator < n)
        ;
    return (dest);
}
