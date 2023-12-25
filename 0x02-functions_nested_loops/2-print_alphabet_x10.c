#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 *                      in lowercase, followed by a new line.
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * E-mai: ahmedfathyme.af@gmail.com
 */
void print_alphabet_x10(void)
{
	int i,j;
	char lowercaseAlphabet;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(lowercaseAlphabet[j]);
		}
		_putchar('\n');
	}
}

