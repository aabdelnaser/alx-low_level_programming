#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: It's an integer return value.
 *
 * Return: Always 1 if lowercase, 0 otherwise 
 * Name : Ahmed Abdel Nasser
 * E-mail:ahmedfathyme.af@gmail.com
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
