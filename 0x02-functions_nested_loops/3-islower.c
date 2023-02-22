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

	if (alphabet >= 'a' && alphabet <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
