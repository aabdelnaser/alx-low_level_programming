#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s : The passed string that will be printed in reverse
 *
 * Return : void
 *
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 22
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
