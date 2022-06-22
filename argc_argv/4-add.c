#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: int count
 * @argv: char vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int res = 0;
	int i, n;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (isdigit(argv[i][n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
