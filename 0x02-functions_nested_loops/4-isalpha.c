#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Function hat checks for alphabetic character
 * @c: An integer Declared Variable to be checked by ASCII Code whether it's alpha or not
 *
 * Return: Always 1 if it's a letter, 0 otherwise
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
