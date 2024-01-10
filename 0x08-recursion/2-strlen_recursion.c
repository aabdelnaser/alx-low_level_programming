#include "main.h"
/**
 * _strlen_recursion - check description
 * Description : a function that returns the length of a string.
 * @s : The string that we calculate its length.
 *
 * Return : Always 0
 *
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 22
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
