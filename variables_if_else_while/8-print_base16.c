#include <stdio.h>
#include <unistd.h>
/**
 * main - print a in hexadecimal
 *
 * Return: always 0
 */
int main(void)
{
    char value_hex = 48;

    while (value_hex != 103)
    {
        if (value_hex == 58) value_hex = 97;
        write(1, &value_hex, 1), value_hex++;
    }
    putchar('\n');
    return (0);
}