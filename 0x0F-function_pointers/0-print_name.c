#include "function_pointers.h"

/**
 * print_name - a pointer function that prints a name.
 * @name: the name given
 * @f: Name Function
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
