#include "main.h"

/**
* _strstr - function that locates
* @haystack: pointer to character param
* @needle: pointer to chararacter param
*
* Return: Always 0 (Success)
* Name: Ahmed Abdel Nasser
* ALX Software Engineering Cohort 12
*/ 

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
