#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: type int
 * @argv: type char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	argv++;
	if (argc >= 0)

	printf("%d\n", argc - 1);

	return (0);
}
