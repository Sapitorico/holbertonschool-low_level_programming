#include "main.h"

char *leet(char *s)
{
	int i;
	char abc;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			if (s[i] == 'a' || s[i] == 'A')
				s[i] = 4;
			else if (s[i] == 'e' || s[i] == 'E')
			{
				s[i] = 3;
			}
			abc++;
		}
	}

	return (s);
}
