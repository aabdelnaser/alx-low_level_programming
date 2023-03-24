#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 *                , followed by a new line.
 * @separator: String Separation
 * @n: number of parameters
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list alist;

	va_start(alist, n);
	while (i < n)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		str = va_arg(alist, char*);
		printf("%s", (str  == NULL) ? "(nil)" : str);
		i++;
	}
	printf("\n");
	va_end(alist);
}
