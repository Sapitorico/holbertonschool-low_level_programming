#include "main.h"
#include "strcmp.c"
/**
 * _strstr - function that locate a substring
 *
 * @haystack: string
 * @needle: substring
 * Return: substring searched in the string or NULL is not found
 */
char *_strstr(char *haystack, char *needle)
{
    if (!haystack || !needle) return(NULL);
    while (*haystack)
    {
        if (!_strcmp(haystack, needle)) return(haystack);
        haystack++;
    }
    return(NULL);
}
