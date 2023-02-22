#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 * @lastDigit: An integer declared argument of the function.
 *
 * Return: The lastDigit variable.
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int print_last_digit(int lastDigit)
{
	int tmpNumber;
	
	tmpNumber = lastDigit % 10;
	if (tmpNumber < 0)
	{
		tmpNumber = tmpNumber * -1;
	}
	_putchar(tmpNumber + '0');
	return (tmpNumber);
}
