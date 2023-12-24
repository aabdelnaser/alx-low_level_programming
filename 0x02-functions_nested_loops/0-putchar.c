#include <stdio.h>
#include "main.h"
/**
 * main - It's a function that prints _putchar followed by a new line.
 *  
 * Return : Always 0 (Success)
 * Name: Ahmed Abdel Nasser
 * Email: ahmedfathyme.af@gmail.com
 */
int main (void)
{
	int i;
	char putchar_letters[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	for (i = 0; i < 8; i++)
	{
		_putchar(putchar_letters[i]);
	}
	_putchar('\n');

	return(0);
}
