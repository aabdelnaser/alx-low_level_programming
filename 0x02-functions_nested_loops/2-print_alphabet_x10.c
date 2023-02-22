#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet
 *                      in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
