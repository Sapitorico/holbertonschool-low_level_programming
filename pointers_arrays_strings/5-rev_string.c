#include "main.h"
/**
 *rev_string - funtion that reverses a string
 *
 *@s:pointer to the array str
 */
void rev_string(char *s)
{
	int i, rp;
	char ap;

	rp = 0;
	for (i = 0; s[i] != '\0'; i++)
		rp++;

	for (i = 0; i < rp; i++)
	{
		ap = s[i];
		s[i] = s[rp - 1];
		s[rp - 1] = ap;
		rp--;
	}
}
