#include "main.h"

/**
 * _strchr - function that prints character c
 * @s: pointer to char
 * @c: char parameters to found
 *
 * Return: *s
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
