#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function that prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: Integer Declared Argument
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
		printf("%\n ", n);
		n++;
		}
	}
	else (n > 98)
	{
		while (n > 98)
		{
			printf("%d\n", n);
			n--;
		}
	}
}
