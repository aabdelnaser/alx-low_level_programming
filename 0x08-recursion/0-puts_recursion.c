#include "main.h"
/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s : The Printed String
 *
 * Return - Always 0
 *
 * Name: Ahmed Abdel Nasser
 * Email: ahmedfathyme@yahoo.com
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		return _putchar('\n');
	}
	return _putchar(*s);
	_puts_recursion(s+1);
}

