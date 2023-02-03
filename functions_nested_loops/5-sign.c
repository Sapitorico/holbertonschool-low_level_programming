#include "main.h"
/**
 * print_sign - print a singed of a number
 *
 * @n: number
 * Return: 1 is positive, -1 is negative or 0 is zero
 */
int print_sign(int n)
{
    if (n < 0)
    {
        write(1, "-", 1);
        return -1;
    }
    else if (n > 0)
    {
        write(1, "+", 1);
        return (1);
    }
    write(1, "0", 1);
    return (0);
}
