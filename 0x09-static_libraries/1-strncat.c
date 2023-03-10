#include "main.h"

/**
 * _strncat - function that string of two words
 * @dest : pointer parameter to char
 * @src : pointer parameter to char
 * @n : int parameter
 *
 * Return: *dest
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

char *_strncat(char *dest, char *src, int n)
{
	int var1;
	int i;

	var1 = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		var1++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[var1 + i] = src[i];
	}
	dest[var1 + i] = '\0';
	return (dest);
}
