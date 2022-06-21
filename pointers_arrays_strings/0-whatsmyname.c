#include <stdio.h>
/**
 * main - rogram that prints its name
 * @argc:var_type int
 * @argv:var_type_ char*
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	printf("%s\n", argv[i]);
	}
	putchar(10);
	return (0);
}
