#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i = 0, m;
	char *s3;

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	s3 = malloc((sizeof(char) * (l1 + l2) + 1));

	if (s3 == 0)
	{
		return (NULL);
	}

	for (i = 0; s1 != NULL && i < l1; i++)
	{
		s3[i] = s1[i];
	}
	for (m = 0; s2 != NULL && m < l2; m++, i++)
	{
		s3[i] = s2[m];
	}
	return (s3);
}
