#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculator
 * @argc: the size of vector
 * @argv: the argument of vector
 * retunr: void
 */
int main(int arc, char *argv[])
{
	int (*f)(int, int);

	if (arc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}
	if (argv[1][1] != '\0')
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
