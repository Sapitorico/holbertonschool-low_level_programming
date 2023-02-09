#include "main.h"
/**
 * print_array - fuction that print n elements to array
 *
 * @a: array to int
 * @n: elements to printed
 */
void print_array(int *a, int n)
{
    int iterator = 0;

    while (*a && iterator < n -1)
    {
        printf("%d, ", *a++);
        iterator++;
    }
    printf("%d\n", *a++);
}
