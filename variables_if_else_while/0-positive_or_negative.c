#include <time.h>
#include <stdlib.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(NULL));   // Initialization, should only be called once.
	int r = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX.
	if (r > 0)
		printf("%d is positive\n", r);
	else if (r == 0)
		printf("%d is zero\n", r);
	else
		printf("%d is negative\n", r;
				return(0);
				}
				
