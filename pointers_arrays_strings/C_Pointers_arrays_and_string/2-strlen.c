#include "main.h"
/**
 * _strlen - obtain a length of stirng
 *
 * @s: stirng
 * Return: length of stirng
 */
int _strlen(char *s)
{
    int len = 0;

    for (; s[len]; len++)
        ;
    return (len);
}
