#include "main.h"

/**
 * factorial - A function that returns
 *             the factorial of a given number.
 * @n: A declared intetger variable.
 *
 * Return:int
 *
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */
int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		res = n * factorial(n - 1);
	}
	else
	{
	return (1);
	}
	return (res);
}
