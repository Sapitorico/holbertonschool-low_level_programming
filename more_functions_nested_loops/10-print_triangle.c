#include "main.h"
/**
 * print_triangle - print a triangle
 *
 * @size: size of square
 */
void print_triangle(int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size; i++)
    {
        for (j = size - 1; j >= 0; j--)
        {
            (j <= i) ? _putchar('#') : _putchar(' ');
        }
        _putchar('\n');
    }
}
