#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
    int hours = 0, minutes = 0;

    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes ++)
        {
            _putchar(hours / 10 + '0');
            _putchar(hours % 10 + '0');
            write(1, ":", 1);
            _putchar(minutes / 10 + '0');
            _putchar(minutes % 10 + '0');
            write(1, "\n", 1);
        }
    }
}