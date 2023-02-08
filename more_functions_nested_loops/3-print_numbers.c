#include "main.h"
/**
 * print_numbers - print a number from 0 to 9
 *
 */
void print_numbers(void)
{
    char number = 48;

    while(number < 58)
    {
        write(1, &number, 1), number++;
    }
    _putchar(10);
}
