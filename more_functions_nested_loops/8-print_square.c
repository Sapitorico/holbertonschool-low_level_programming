#include "main.h"
/**
 * print_square - print a square
 *
 * @size: size of square
 */
void print_square(int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
