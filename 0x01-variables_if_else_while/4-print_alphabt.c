#include <stdio.h>

/**
 * main - Program that prints all alphabets except q and e
 *
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	char lowercaseLetter;

	for (lowercaseLetter = 'a'; lowercaseLetter <= 'z' ; lowercaseLetter++)
	{
		if (lowercaseLetter != q || lowercaseLetter != e)
		{
			putchar(lowercaseLetter);
		}
		else
			lowercaseLetter++;
	}
	putchar('\n');

	return (0);
}
