#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculator
 * @arc: the size of vector
 * @argv: the argument of vector
 * Return: void
 */
int main(int arc, char *argv[])
{
	int (*f)(int, int);
	char *get_op;

	if (arc != 4)
	{
		puts("Error");
		exit(98);
	}
	get_op = argv[2];

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
