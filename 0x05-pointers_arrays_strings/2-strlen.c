#include "main.h"
#include <string.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: A Character Declared Variable
 *
 * Return: 0 Always (Success)
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */
int _strlen(char *s)
{
	int stringLength;

	while(s[stringLength])
	{
		stringLength++;
	}
	return (stringLength);
}
