#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: character to check
 * Return: 1 is upper case, 0 is lower case
 */
int _isupper(int c)
{
    return (c <= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z');
}
