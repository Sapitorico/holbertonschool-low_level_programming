#include "main.h"
/**
 * _strlen_recursion - get a length of stirng using recursion
 *
 * @s: stirng
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
    if (*s) return(_strlen_recursion(s + 1) + 1);
}
