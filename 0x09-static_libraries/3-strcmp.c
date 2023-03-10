#include "main.h"

/**
 * _strcmp - function that compares
 * @s1 : pointer to char parameters
 * @s2 : pointer to char parameters
 * 
 * Return: *dest
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
