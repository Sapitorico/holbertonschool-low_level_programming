#include <stdio.h>
#include <unistd.h>
/**
 * main - print a possible of single-digit
 *
 * Return: always 0
 */
int main(void)
{
    int number = 48, separator1 = 44, separator2 = 32;

    while (number != 58)
    {
        write(1, &number, 1), number++;
        if (number < 58) write(1, &separator1, 1),\
        write(1, &separator2, 1);
    }
    putchar('\n');
    return (0);
}
