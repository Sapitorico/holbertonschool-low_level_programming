#include "main.h"
/**
 * print_most_numbers - print number from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
    char numbers = 48;

    while (numbers < 58)
    {
        (numbers == 50 || numbers == 52) && numbers++;
        write(1, &numbers, 1), numbers++;
    }
    _putchar(10);
}