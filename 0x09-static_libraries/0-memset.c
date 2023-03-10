#include "main.h"

/**
 * _memset - function to exchange data
 * @s: pointer to char parameters
 * @b: data
 * @n: index
 *
 * Return: *s
 * Name: Ahmed Abdel Nasser Fathy
 * ALX Software Engineering Cohort 12
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
