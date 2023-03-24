#include "variadic_functions.h"
/**
 * sum_them_all - adds all the entered numbers
 * @n: the Passed Parameter
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i = 0;
	va_list alist;

	va_start(alist, n);

	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		sum += va_arg(alist, int);
		i++;
	}
	va_end(alist);

	return (sum);
}
