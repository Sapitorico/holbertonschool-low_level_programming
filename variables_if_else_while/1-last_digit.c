#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assigned a random number in variable n
 *
 * Return: always 0
 */
int main(void)
{
	int n;
    int last_number = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_number = n % 10;
    printf("Last digit of %d is %d ", n, last_number);
    (last_number > 5) ? printf("and is greater than 5\n") : \
    (last_number < 6 && last_number != 0) ? printf("and is less than 6 and not 0\n") : \
    printf("and is 0\n");
    return (0);
}