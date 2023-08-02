#include "main.h"
/**
 *is_prime_number - Checks if number is prime
 *@n: number
 *Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, n - 1));
}

/**
 *prime_check - Helper function to check if number is prime number
 *@n: Input number
 *@i: start point. Should always be greater than 1
 *Return: 1 if prime, 0 if not.
 */
int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i) == 0 && i > 0)
		return (0);
	return (prime_check(n, i - 1));
}
