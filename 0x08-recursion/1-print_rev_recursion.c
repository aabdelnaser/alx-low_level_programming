#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s : It's a string that will be reverrsed.
 *
 * return - void
 *
 * Name: Ahmed Abdel Nasser
 * email: ahmedfathyme@yahoo.com
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
