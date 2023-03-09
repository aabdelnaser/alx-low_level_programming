#include "main.h"

/**
 * primeNumberChecker - A function that checks the prime number
 * @num1: A first integer declared variable.
 * @num2: A second integer declared variable.
 *
 * Return: int
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */
int primeNumberChecker(int num1, int num2)
{
	if (num2 < 2 || num2 % num1 == 0)
	{
		return (0);
	}
	else if (num1 > num2 / 2)
	{
		return (1);
	}
	else
	{
		return (primeNumberChecker(num1 + 1, num2));
	}
}

/**
 * is_prime_number - A function that returns 1 if the input
 *                   integer is a prime number, otherwise return 0.
 * @n: A Declared Integer Variable
 *
 * Return: int
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12.
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (primeNumberChecker(2, n));
}
