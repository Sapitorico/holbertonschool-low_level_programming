#include "main.h"
/**
 * main - fizz buzz
 *
 * Return: always 0
 */
int main(void)
{
    int numbers = 1;

    for (numbers = 1; numbers <= 100; numbers++)
    {
        if (numbers % 15 == 0)
        {
            printf("FizzBuzz ");\
            numbers++;
        }
        else if (numbers % 3 == 0)
        {
            printf("Fizz ");
            numbers++;
        }
        else if (numbers % 5 == 0)
        {
            printf("Buzz ");
            numbers++;
        }
        else
            printf("%d ", numbers);
    }
    return (0);
}