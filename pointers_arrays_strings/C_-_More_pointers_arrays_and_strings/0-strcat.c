#include "main.h"
/**
 * _strcat - function that concatenate a two stirng
 *
 * @dest: dest to string concatenate
 * @src: string to concatenate
 * Return: pointer to string concat
 */
char *_strcat(char *dest, char *src)
{
    int len = _strlen(dest);

    while (*src)
    {
        dest[len++] = *src++;
    }
    return (dest);
}
