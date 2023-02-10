#include "main.h"
/**
 * _strncat - concatenate n characters
 *
 * @dest: destination of the concatenated stirng
 * @src: stirng to concatenate
 * @n: number of characters to concatenate
 * Return: pointer to stirng concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
    int len = _strlen(dest);
    int iterator = 0;

    while (iterator < n && *src)
    {
        dest[len++] = *src++;
        iterator++;
    }
    return (dest);
}
