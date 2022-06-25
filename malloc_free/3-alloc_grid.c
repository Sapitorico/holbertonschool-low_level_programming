#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i = 0, n;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * height);

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
				for (i = 0; i >= 0; i--)
				{
				free(s[i]);
				}
				free(s);
				return(NULL);
			}
	for (n = 0; s[i][n]; n++)
	{
		s[i][n] = 0;
	}
	}
	return (s);
}
