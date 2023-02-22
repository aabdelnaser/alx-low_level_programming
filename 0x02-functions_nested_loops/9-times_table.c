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

	for (row = 0 ; row <= 9 ; row++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			result = row * column;
			if (result <= 9)
			{
				_putchar(result / 10);
				_putchar((result % 10) + '0');
				if(column == 9)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (column == 9)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
