#include "main.h"
/**
 * print_rev - funtion that prints a string, in reverse
 *
 *@s: pointer pointing to the str
 */
void print_rev(char *s)
{
	int rev;

	if (!s){
		return;
}
	while(s[rev])
	{
		rev++;
	}
while (rev >= 0)
{
	_putchar(s[rev]);
	rev--;
}
}
