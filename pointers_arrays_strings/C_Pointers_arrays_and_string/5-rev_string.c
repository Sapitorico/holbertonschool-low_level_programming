#include "main.h"
/**
 * rev_string - function that revert chars of string
 *
 * @s: string to revert
 */
void rev_string(char *s)
{
    int index = 0;
    int len = _strlen(s) - 1;
    char temp;

    for (; index <= len / 2; index++)
    {
        temp = s[index];
        s[index] = s[len - index];
        s[len - index] = temp;
    }
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}