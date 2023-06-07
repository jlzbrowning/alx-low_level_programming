#include "main.h"
/**
 * factorial - calcs factorial
 * @n: number to be factorialised
 * Return: the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1)
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

