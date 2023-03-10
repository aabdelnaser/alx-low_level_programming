#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from source.
 *
 * Return: the pointer to destination.
 * Name: Ahmed Abdel Nasser
 * ALX SWE Cohort 12.
 */

char *_strncpy (char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0 ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
