#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
    int i = 0;

    for (i = 0; i != 10; i++)
    {
        print_alphabet();
    }
}
