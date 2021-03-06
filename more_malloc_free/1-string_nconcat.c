#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: strung 2
 * @n: value of string concatenation
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, m, len1 = 0, len2 = 0;
	char *new_str;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	new_str = malloc((sizeof(char) * (len1 + len2) + 4));
	if (new_str == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (m = 0; m < n; m++, i++)
		new_str[i] = s2[m];
	new_str[i] = '\0';
	return (new_str);
}
