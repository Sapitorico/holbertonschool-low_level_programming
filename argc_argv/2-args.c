#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: int
 * @argv: char*
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
	printf("%s\n", argv[i]);


	return (0);
}
