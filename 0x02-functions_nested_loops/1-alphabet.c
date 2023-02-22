#include <stdio.h>
#include "main.h"

/**
 * main - Program prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

void print_alphabet(void)
{
	char alphabet;

	for ( alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	
	_putchar('\n');

}
