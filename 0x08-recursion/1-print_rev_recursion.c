#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s : A declared string variable.
 *
 * Return : Void
 * Name : Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s - 1);
		_putchar(*s)
	}
}
