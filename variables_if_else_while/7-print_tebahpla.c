#include <stdio.h>
#include <unistd.h>
int main(void)
{
    char alphabet = 122;

    while (alphabet > 96)
    {
        write(1, &alphabet, 1), alphabet--;
    }
    putchar('\n');
    return (0);
}
