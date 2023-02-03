#include "main.h"
#include <stdint.h>
/**
 * times_table - prints the 9 times table
 *
 */
void times_table(void)
{
    int sub, cos, sin;

    for (sub = 0; sub < 10; sub++)
    {
        for (cos = 0; cos < 10; cos++)
        {
            sin = sub * cos;
            if (sin > 9)
            {
                _putchar(sin / 10 + '0');
                _putchar(sin % 10 + '0');
            }
            else if (cos != 0)
            {
                _putchar(' ');
                _putchar(sin % 10 + '0');
            }
            else
                _putchar(sin % 10 + '0');
            if (cos != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        write(1, "\n", 1);
    }
}
