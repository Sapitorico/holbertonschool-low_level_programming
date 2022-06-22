#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: int coun
 * @argv: char vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x2;
	int x1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x1 = atoi(argv[1]);
	x2 = atoi(argv[2]);

	x1 *= x2;

	printf("%d\n", x1);

	return (0);
}
