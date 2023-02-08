#include "main.h"
/**
 * more_numbers - print numbers form 0 to 14 10 times
 *
 */
void more_numbers(void)
{
    int numbers = 0;
    int interator = 0;

    for (interator = 0; interator < 10; interator++)
    {
        for (numbers = 0; numbers <=14; numbers++)
        {
            (numbers < 9) ? _putchar(numbers % 10 + '0') : \
            (_putchar(numbers / 10 + '0'), _putchar(numbers % 10 + '0'));
        }
        _putchar('\n');
    }
}
