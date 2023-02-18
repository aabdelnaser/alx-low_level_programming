#include <stdio.h>

/**
 * main - Program that prints all the numbers of base 16
 *        in lowercase, followed by a new line with putchar
 *
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	int hexadecimalNumber;
	char letter;

	for (hexadecimalNumber = 48 ; hexadecimalNumber < 58 ; hexadecimalNumber++)
	{
		putchar(hexadecimalNumber);
	}
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
