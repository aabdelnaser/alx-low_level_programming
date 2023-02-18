#include <stdio.h>

/**
 * main - Program that prints all numbers of base 10 with putchar
 *
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	int number;

	for (number = '0' ; number < '10' ; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
