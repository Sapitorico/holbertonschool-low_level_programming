#include "main.h"
/**
 * cap_stirng - capitalizes all words of a string
 *
 * @str: stirng
 * Return: pointer to the capitalized
 */
char *cap_string(char *str)
{
    int index = 0;
    int count_sep = 0;
    char dictionary[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

    if (str[index] >= 97 && str[index] <= 122)
        str[index] -= 32;
    for (index = 0; str[index]; index++)
    {
        for (count_sep = 0; dictionary[count_sep]; count_sep++)
        {
            if (str[index] == dictionary[count_sep])
            {
                if (str[index + 1] >= 92 && str[index + 1] <= 122)
                {
                    str[index + 1] -= 32;
                    break;
                }
            }
        }
    }
    return (str);
}
