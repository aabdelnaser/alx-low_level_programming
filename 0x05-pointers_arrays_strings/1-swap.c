#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @a: First Declared Integer Variable
 * @b: Second Declared Integer Variable
 *
 * Return: 0 Always (Success)
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
