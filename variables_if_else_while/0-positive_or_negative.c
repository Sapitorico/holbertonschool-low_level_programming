#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this program assigned a random number n
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	(n > 0) ? printf("%d is positive\n", n) : \
	(n < 0) ? printf("%d is negative\n", n) : printf("%d is zero\n", n);
	return (0);
}
