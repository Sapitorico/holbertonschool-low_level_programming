#include "main.h"
/**
 * reverse_array - reverted a elements of array
 *
 * @a: pointer to array
 * @n: number of elements to reverse
 */
void reverse_array(int *a, int n)
{
    int temp = 0;
    int index = 0, len = n - 1;

    for (index = 0; index < len; index++, len--)
    {
        temp = a[index];
        a[index] = a[len];
        a[len] = temp;
    }
}

