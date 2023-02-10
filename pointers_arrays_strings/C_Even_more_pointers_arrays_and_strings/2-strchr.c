#include "main.h"
/**
 * _strchr - function that locate a character in stirng
 *
 * @s: pointer to the string
 * @c: character
 * Return: pointer to the character is found or NULL is not
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c) return (s);
        *s++;
    }
    return (NULL);
}
