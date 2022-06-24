#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, m;
	char *s3;

	if (s1 == NULL)
	{
		s1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = 0;
	}

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	s3 = malloc((sizeof(char) * (l1 + l2) + 1));

	if (s3 == 0)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		s3[i] = s1[i];
	}
	for (m = 0; m < l2; m++, i++)
	{
		s3[i] = s2[m];
	}
	return (s3);
}
