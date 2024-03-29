#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n : It's the number that the factorial will be calculated
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
