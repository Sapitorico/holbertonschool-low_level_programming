#include "main.h"
/**
 * _islower - checke for lowercase a character
 *
 * @c: a character
 * Return: 1 is a lower, 0 is not
 */
int _islower(int c)
{
    (c >= 97 && c <= 122) ? c = 1 : (c = 0);
    return (c);
}
