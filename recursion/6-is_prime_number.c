#include "main.h"
/**
 * is_prime_number - identify prime numbers
 *
 * @n: number
 * Return: 1 if numbers is a prime or 0 is nots
 */
int is_prime_number(int n)
{
    return (n <= 0) ? 0 : _prime(n, 2);
}

/**
 * _prime - identify prime
 * @n: number
 * @i: prime
 *
 * Return: 1 if the integer is prime, 0 if not prime
 */
int _prime(int n, int i)
{
	return (n == i) ? 1 : (n % i == 0) ? 0 : _prime(n, i + 1);
}