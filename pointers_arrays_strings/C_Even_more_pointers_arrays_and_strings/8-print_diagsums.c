#include "main.h"
/**
 * print_diagsums - print a sum of the two diagonals of matrix
 *
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
    int iterator = 0,
    result1 = 0, result2 = 0;

    for (iterator = 0; iterator < size; iterator++)
        result1 += a[iterator * size + iterator],
        result2 += a[size * (iterator + 1) - (iterator + 1)];
    printf("%d, %d\n", result1, result2);
}
