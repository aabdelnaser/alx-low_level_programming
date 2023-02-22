#include <stdio.h>
#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @n: An integer declared variable that checks the sign by ASCII Code number
 *
 * Return: Always 1 if the value is > than zero,
 *         Always 0 if the value is zero,
 *         Always -1 if the value is < than zero.
 * Name : Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
