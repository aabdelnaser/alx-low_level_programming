#include "main.h"

/**
 * _atoi - an integer function
 * @s: pointer parameter
 *
 * Return: int
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int _atoi(char *s)
{
	int i;
	int result;
	int sign;
	int breaks;

	result = 0;
	sign = -1;
	breaks = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10;
			result -= (s[i] - '0');
			breaks = 1;
		}
		else if (breaks == 1)
			break;
	}
	result = sign * result;
	return (result);
}
