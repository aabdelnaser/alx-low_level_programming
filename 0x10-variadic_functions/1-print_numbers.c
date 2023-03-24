#include "variadic_functions.h"
/**
 * print_numbers - prints all  numbers, followed by a new line
 * @n: Passed Parameter
 * @separator: space of two numbers
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list alist;

	va_start(alist, n);

	if (separator == NULL)
	{
		separator = " ";
	}
	while (i < n)
	{
		printf("%d", va_arg(alist, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(alist);
}
