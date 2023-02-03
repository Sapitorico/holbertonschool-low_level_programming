#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: a character
 * Return: 1 is alphabetic, 0 is not
 */
int _isalpha(int c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
