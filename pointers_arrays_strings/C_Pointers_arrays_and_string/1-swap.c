#include "main.h"
/**
 * _swap - function that swaps two integer
 *
 * @a: pointer to integer
 * @b: pointer to integer
 */
void swap_int(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}
