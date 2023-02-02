#include <stdio.h>
#include <unistd.h>
/**
 * main - Printing using the Write function, it uses an exit and controls the bytes that print
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}