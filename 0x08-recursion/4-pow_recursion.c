#include "main.h"

/**
 * _pow_recursion - A  function that returns the value of x
 *                  raised to the power of y.
 * @x : A declared integer variable which is base.
 * @y: A declared integer variable which is the power.
 *
 * Return:int
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12.
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
