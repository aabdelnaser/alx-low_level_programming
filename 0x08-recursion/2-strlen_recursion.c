#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s : The string that we calculate its length.
 *
 * Return : 0 Always Success.
 *
 * Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 22
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
