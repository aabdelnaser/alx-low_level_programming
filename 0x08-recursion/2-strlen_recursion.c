#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s : The string that we calculate its length.
 *
 * Return : Length of the String (Success).
 *
 * Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 22
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
