#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum
 *@a:qwd
 *@size:wd
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1, sum2;

	k = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? sum1 += a[k] : 0;
			(i + j == size - 1) ? sum2 += a[k] : 0;
			k++;
		}
	printf("%d, %d\n", sum1, sum2);
}
