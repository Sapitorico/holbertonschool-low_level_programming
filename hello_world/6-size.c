#include<stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	double c;
	char d;

printf("Size of int: %zu bytes\n", sizeof(a));
printf("Size of float: %zu bytes\n", sizeof(b));
printf("Size of double: %zu bytes\n", sizeof(c));
printf("Size of char: %zu byte\n", sizeof(d));                    
	return (0);
}
