#include "main.h"

/**
 * check_prime - helper function to check for prime numbers
 * @n: the number to check
 * @i: the divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i < n)
		return (0);
	if (i >= n)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - identifies if a number is prime
 * @n: the integer to evaluate
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
