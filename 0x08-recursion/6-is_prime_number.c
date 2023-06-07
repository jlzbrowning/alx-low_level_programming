#include "main.h"
/**
 * is_prime_number - returns 1 if n is prime
 * @n: number to check if prime
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0); /* Numbers less than 2 are not prime */
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

/**
 * is_prime_helper - Recursive helper function to check primality.
 * @n: The number to check.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
	{
		return (0); /* Divisible by divisor, not prime */
	}
	else if (divisor * divisor > n)
	{
		return (1); /* Reached the square root, prime */
	}
	else
	{
		return (is_prime_helper(n, divisor + 1)); /* Check next divisor */
	}
}
