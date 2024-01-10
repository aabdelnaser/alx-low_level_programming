#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x,
 *                  raised to the power of y
 *
 * @x : The base Number
 * @y : The power number
 *
 * Return : The result of power, otherwise an error,
 *          otherwise if y == 0 then returns 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
