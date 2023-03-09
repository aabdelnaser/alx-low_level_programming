#include "main.h"

/**
 * squareRootChecker - A function that checks for the square root.
 *
 * @num1: An Integer declared variable.
 * @num2: A second integer declared vairable
 *
 * Return:int
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12.
 */
int squareRootChecker(int num1, int num2)
{
	if (num1 * num1 == num2)
	{
		return (num1);
	}
	if (num1 * num1 > num2)
	{
		return (-1);
	}
	return (squareRootChecker(num1 + 1, num2));
}

/**
 * _sqrt_recursion - A  function that returns the
 *                   natural square root of a number.
 * @n: An integer declared variable.
 *
 * Return: natural square root (int).
 * Name: Ahmed Abdel Nasser Fathy.
 * ALX Software Engineering Cohort 12.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return squareRootChecker(1 , n);
}
