#include <stdio.h>
#include <unistd.h>
/**
 * main - print a possible of single-digit
 *
 * Return: always 0
 */
int main(void)
{
    char number = 48, separator1 = ',', separator2 = 32;

    while (number != 58)
    {
        write(1, &number, 1), number++;
        (number < 58) && write(1, &separator1, 1), write(1, &separator2, 1);
    }
    putchar('\n');
    return (0);
}