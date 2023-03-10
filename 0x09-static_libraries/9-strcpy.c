#include "main.h"

/**
 * *_strcpy - function that copies stringg to another
 * @dest: destination pointer
 * @src: source poiter
 *
 * Return: dest
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
