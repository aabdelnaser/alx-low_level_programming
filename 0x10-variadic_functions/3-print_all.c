#include "variadic_functions.h"
/**
 * print_all - A function that prints anything.
 * @format: specifies the necessary operations
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

void print_all(const char * const format, ...)
{
	char *p;
	va_list alist;
	int i, indicatior;

	va_start(alist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(alist, int));
				indicator = 0;
				break;
			case 'i':
				printf("%i", va_arg(alist, int));
				indicator = 0;
				break;
			case 'f':
				printf("%f", va_arg(alist, double));
				indicator = 0;
				break;
			case 's':
				p = va_arg(alist, char*);
				printf("%s", (p == NULL) ? "(nil)" : p);
				indicator = 0;
				break;
			default:
				indicator = 1;
				break;
		}
		if (format[i + 1] != '\0' && indicator == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(alist);
}
