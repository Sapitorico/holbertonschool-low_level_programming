#include "main.h"
/**
 * print_last_number - print the last number
 *
 * @number: number
 * Return: the las number
 */
int print_last_digit(int number)
{
    int last_number = number % 10;

    number > 10 ? last_number : (last_number = -last_number);
    _putchar(last_number + '0');
    return last_number;
}
