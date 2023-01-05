#include "main.h"

/**
 * is_prime: detechts if a number is a prime
 * @n: the number to be evaluated
 * @i: the divisor
 * Reurn: 0 or 1
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return is_prime(n, i + 1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * 	 otherwise return 0.
 * @n: the number to be evaluated.
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
