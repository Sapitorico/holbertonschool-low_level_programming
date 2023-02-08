#include "main.h"
/**
 * print_diagonal - function that print a diagonal
 *
 * @n: len of diagonal
 */
void print_diagonal(int n)
{
    int i = 0, j = 0;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    _putchar('\\');
                    _putchar('\n');
                }
                if (j < i)
                {
                    _putchar(' ');
                }
            }
        }
    }
    else
        _putchar('\n');
}
