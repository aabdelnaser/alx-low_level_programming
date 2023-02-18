#include <stdio.h>

/**
 * main - Printing the alphabet letters in reverse
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	char alphabetLetter;

	for (alphabetLetter = 'z' ; alphabetLetter >= 'a' ; alphabetLetter--)
	{
		putchar(alphabetLetter);
	}
	puchar('\n');

	return (0);
}
