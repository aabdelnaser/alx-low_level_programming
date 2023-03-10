#include <stdio.h>
#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 *@c: an integer declared variable to be tested in ASCII Code
 *
 * Return: Always 1 if lowercase, 0 otherwise
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
