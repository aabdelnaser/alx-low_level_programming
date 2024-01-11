#include "main.h"
/**
 * prime_number_checker - a function that checks the number if prime
 * @dividend : The Numerator
 * @divisor : The Denomenator
 *
 * Return: 1 if prime, 0 otherwise.
 */
int prime_number_checker(int dividend, int divisor)
{
	if (divisor < 2 || divisor % dividend == 0)
	{
		return (0);
	}
	else if (dividend > divisor / 2)
	{
		return (1);
	}
	else
	{
		return (prime_number_checker(dividend + 1, divisor));
	}
}
/**
 * is_prime_number - a function that returns 1
 *                   if the input integer is a prime number
 *                   , otherwise return 0.
 * @n : The Number to be checked
 *
 * Return: 1 in Success, 0 Otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_number_checker(2, n));
	}
}
