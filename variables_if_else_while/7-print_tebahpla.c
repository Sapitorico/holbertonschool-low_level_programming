#include <stdio.h>
#include <unistd.h>
/**
 * main - print a alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
    char alphabet = 122;

    while (alphabet > 96)
    {
        write(1, &alphabet, 1), alphabet--;
    }
    putchar('\n');
    return (0);
}
