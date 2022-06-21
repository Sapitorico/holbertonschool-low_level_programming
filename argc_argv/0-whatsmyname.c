#include <stdio.h>
/**
 * main - rogram that prints its name
 * @argc:var_type int
 * @argv:var_type_ char*
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);

	return (0);
}
