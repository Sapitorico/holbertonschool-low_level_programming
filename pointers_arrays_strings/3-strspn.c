#include "main.h"

unsigned int_strspn(char *s, char *accept)
{
	unsigned int i, temp;

	for ( i = 0; s[i]; i++)
	{
		for (temp = 0; accept[temp]; temp++)
		{
			if (s[i] == accept[temp])
				return (*s + i);
		}
	}
		return (*s);

}
