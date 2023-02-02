#include <stdio.h>
#include <unistd.h>
/**
 * main - print a alphabet in lower case
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 97;
	while (alphabet != 123)
	{
		write(1, &alphabet, 1), alphabet++;
	}
	putchar('\n');
	return (0);
}
