#include <stdio.h>
#include <unistd.h>
/**
 * main - print a number from 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
    int number = 48;

    while (number != 58)
    {
        write(1, &number, 1), number++;
    }
    putchar('\n');
    return (0);
}
