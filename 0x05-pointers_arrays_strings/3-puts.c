#include "main.h"

/**
 * _puts - Function that prints a string
 *        ,followed by a new line, to stdout.
 * @str: The String To Be Printed
 *
 * Return: Printing the string
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; i <= sizeof(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
