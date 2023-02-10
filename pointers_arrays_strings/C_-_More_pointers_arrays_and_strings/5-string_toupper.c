#include "main.h"
/**
 * string_toupper - change the characters in stirng to uppercase
 *
 * @str: stirng
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (str[index] >= 97 && str[index] <= 122)
            str[index] -= 32;
        index++;
    }
    return (str);
}
