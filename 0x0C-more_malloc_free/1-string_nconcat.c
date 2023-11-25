#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1 : pointer of first string.
 * @s2: pointer of second string.
 * @n : unsigned integer for no of bytes
 * Return : NULL, when function fails
 *
 * Name: Ahmed Abdel Nasser
 * E-mail: ahmedfathyme.af@gmail.com
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int loop1, loop2, counnter;
	char *total_string;
	
	if(s1 = NULL) // Checking the first string if NULL or Not
	{
		s1 = "";
	}
	else
	{
		for(loop1 = 0; s1[loop1]; ++loop1)
		{
			;
		}
	}
	if(s2 = NULL) // Checking the second string if MULL or Not
	{
		s2 = "";
	}
	else
	{
		for(loop2; s2[loop2]; ++loop2)
		{
			;
		}
	}
	if(total_string == NULL) // if the function fails return NULL
		return (NULL);
	if(loop2 > n)
	{
		loop2 = n;
		total_string = malloc(sizeof(char) * (loop1 + loop2 + 1));
	}
	for(counter = 0; counter < loop1; counter++)
	{
		total_string[counter] = s1[counter];
	}
	for(counter = 0; counter < loop2; counter++)
	{
		total_string[counter+loop1] = s2[counter];
		total_string[loop1 + loop2] = '\0';
	}
	return (total_string);
}
