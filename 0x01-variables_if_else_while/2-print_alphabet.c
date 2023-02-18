#include <stdio.h>

/**
 * main - Prints alphabets only with putchar
 *
 * Return: Always 0.
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	char alphabetLetter;

	for (alphabetLetter = 'a'; alphabetLetter <='z' ; alphabetLetter++)
	{
		putchar(alphabetLetter);
	}
	putchar('\n');
	return (0);
}
