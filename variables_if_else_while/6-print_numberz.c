#include <stdio.h>
#include <unistd.h>
int main(void)
{
    int number = 48;

    while (number != 58)
    {
        write(1, &number, 1), number++;
    }
    putchar('\n');
    return (0);
}
