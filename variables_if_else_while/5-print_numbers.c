#include <stdio.h>
#include <unistd.h>
/**
 * main - print numbers
 *
 * Return: always 0
 */
int main(void)
{
    char number = 48;

    while (number != 58)
    {
        write(1, &number, 1), number++;
    }
    putchar('\n');
    return (0);
}