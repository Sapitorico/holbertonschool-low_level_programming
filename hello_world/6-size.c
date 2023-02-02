#include <stdio.h>
/**
 * main - function that prints in bytes the values of variables, %zu format of the length of a variable in signsus
 * 
 * Return: 0
 */
int main(void)
{
    printf("Size of char: %zu bytes(s)\n", sizeof(char));
    printf("Size of int: %zu bytes(s)\n", sizeof(int));
    printf("Size of char: %zu bytes(s)\n", sizeof(long int));
    printf("Size of char: %zu bytes(s)\n", sizeof(long long int));
    printf("Size of char: %zu bytes(s)\n", sizeof(float));
    return (0);
}