#include "main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
    char alphabet = 97;

    while (alphabet != 123)
    {
        write(1, &alphabet, 1), alphabet++;
    }
    putchar('\n');
}
