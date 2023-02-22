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
	int row, column;
	
	for (row = 0 ; row <= 9 ; row++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			_putchar(row * column);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
