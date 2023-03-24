#include "variadic_functions.h"
/**
 * print_strings - unction that prints strings, followed by a new line.
 * @separator: String Separation
 * @n: number of parameters
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *tmp;
	unsigned int i;
	va_list alist;

	va_start(alist, n);
	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		tmp = va_arg(alist, char*);
		if (tmp == NULL)
		{
			tmp = "(nil)";
		}
		printf("%s", tmp);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(alist);
}
