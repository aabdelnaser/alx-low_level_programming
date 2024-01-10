#include "main.h"
/**
 * _puts_recursion - a function that prints a string,
 *                   followed by a new line.
 * @s : The passed string that should be printed
 *
 * Return: void
 *
 * Name: Ahmed Abdel Nasser
 * Email: ALX Software Engineering Cohort 22
 */
void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		return (*s);
		_puts_recursion(s + 1);
	}
	else
	{
	return ('\n');
	}
}
