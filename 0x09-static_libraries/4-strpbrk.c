#include "main.h"

/**
 * _strpbrk - function that calculates bytes
 * @s: pointer to character parameter
 * @accept: pointer to chararacter
 *
 * Return: Always 0 (SUCCESS)
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
