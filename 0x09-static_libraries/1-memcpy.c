#include "main.h"

/**
 * _memcpy - function that copies
 * @dest: pointer parameter to char
 * @src: pointer parameter to char
 * @n: size
 * Return: *dest
 *
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
