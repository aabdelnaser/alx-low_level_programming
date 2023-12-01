#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator : printed string between numbers.
 * @n :  The number of integers passed to the function.
 * @... : number of numbers printed.
 *
 * Return : Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));


			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	printf("\n");

	va_end(numbers);
}
