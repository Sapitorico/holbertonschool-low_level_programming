#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *
 *@a: pointer to a value
 *@b: pointer to a value
 *
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
