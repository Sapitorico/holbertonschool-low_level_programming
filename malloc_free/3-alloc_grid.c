#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i, n;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == 0)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
			if (s[i] == 0)
			{
				for (--i; i >= 0; i--)
					free(s[i]);
				free(s);
				return  (NULL);
			}
	}
	for (i = 0; i < height; i++)
		for (n = 0; n < width; n++)
		s[i][n] = 0;
	return (s);
}
