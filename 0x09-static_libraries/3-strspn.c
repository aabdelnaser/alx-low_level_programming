#include "main.h"

/**
* _strspn - function that gets the length of a substring.
* @s: String where substring will look.
* @accept: Substring of accepted characters
*
* Return: c
* Name: Ahmed Abdel Nasser Fathy
* ALX Software Engineering Cohort 12
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *t = accept;

	c = 0;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
