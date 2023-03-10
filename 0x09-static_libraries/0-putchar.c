#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints _putchar, followed by a new line and returns 0
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int main(void)
{
	char wordCharacters[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(wordCharacters[i]);
	}

	_putchar('\n');

	return (0);
}
