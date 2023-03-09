#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s : A declared string variable
 *
 * Return:int
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12.
 */
int _strlen_recursion(char *s)
{
	int wordSize = 0;

	if (*s)
	{
		wordSize++;
		wordSize = wordSize + _strlen_recursion(s + 1);
	}
	return (wordSize);
}
