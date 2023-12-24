#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that prints an alphabet in lowercase,
 *                  followed by new line.
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * E-mail: ahmedfathyme.af@gmail.com
 */
void print_alphabet(void)
{
	char lowerCaseAlphabet;

	for (lowerCaseAlphabet = 97; lowerCaseAlphabet <= 122; lowerCaseAlphabet++)
	{
		_putchar(lowerCaseAlphabet);
	}
	_putchar('\n');
}
