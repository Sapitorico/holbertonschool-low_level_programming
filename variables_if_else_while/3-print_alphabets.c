#include <stdio.h>
#include <unistd.h>
/**
 * main - function that print alphabet in lower case and upper case
 *
 * Return: always 0
 */
int main(void)
{
    char alphabet = 97;

    while (alphabet != 91)
    {
        write(1, &alphabet, 1), alphabet++;
        if (alphabet == 123) alphabet = 65;
    }
    putchar('\n');
    return (0);
}
