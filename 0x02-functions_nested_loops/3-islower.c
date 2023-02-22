#include <stdio.h>
#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 *
 * Return: Always 1 if lowercase, 0 otherwise
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int _islower(int c)
{
	char alphabet;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
