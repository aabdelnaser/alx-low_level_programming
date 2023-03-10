#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @i : An integer declared variable.
 *
 * Return: int
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
