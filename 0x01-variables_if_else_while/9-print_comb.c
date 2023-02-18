#include <stdio.h>

/**
 * main - Program that prints all the possible numbers in ascending order
 *        separated by comma (,)
 *
 * Return: Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 */
int main(void)
{
	int number;

	for (number = 48 ; number < 58 ; number++)
	{
		putchar(number);
		if (number != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}
