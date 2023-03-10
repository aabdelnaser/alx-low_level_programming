#include "main.h"

/**
 * *_strcat - function that commute srtings
 * @dest: pointer parameter to a char
 * @src: pointer parameter to a char
 * 
 * Return: dest
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
