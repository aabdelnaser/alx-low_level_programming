#include <stdio.h>
#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void times_table(void)
{
	int row, column, result;
	
	for (row = 0 ; row <= 8 ; row++)
	{
		for (column = 0 ; column <= 8 ; column++)
		{
			result = row * column;
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}i#include <stdio.h>
#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void times_table(void)
{
	int row, column, result;
	
	for (row = 0 ; row <= 8 ; row++)
	{
		for (column = 0 ; column <= 8 ; column++)
		{
			result = row * column;
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
