#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase then in UPPERCASE
 *
 * Return : Always 0.
 * Name: Ahmed Abdel Nasser
 */
int main (void)
{
	char lowercaseLetter;
	char uppercaseLetter;

	for (lowercaseLetter = 'a' ; lowercaseLetter <= 'z' ; lowercaseLetter++)
	{
		putchar(lowercaseLetter);
	}
	for (uppercaseLetter = 'A' ; uppercaseLetter <= 'Z' ; uppercaseLetter++)
	{
		putchar(uppercaseLetter);
	}
	putchar("\n");

	return (0);
}
