#include "main.h"
/**
 * _sqrt_recursion_helper - a helper function that returns
 *                          the natural square root of a number.
 * @n : The number that we should find its square root.
 * @rootNumber: The root that will be multiplied by itself
 *
 * Return: -1 in Failure, Otherwise will return the root number.
 */
int _sqrt_recursion_helper(int n, int rootNumber)
{
	if ((rootNumber * rootNumber) > n)
	{
		return (-1);
	}
	else if ((rootNumber * rootNumber) == n)
	{
		return (rootNumber);
	}
	else
	{
		return (_sqrt_recursion_helper(n, rootNumber + 1));
	}
}
/**
 * _sqrt_recursion - a function that returns
 *                   the natural square root of a number.
 * @n : The number that we should find its square root.
 *
 * Return: -1 in Failure, Otherwise will call the helper function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_helper(n, 0));
	}
}
