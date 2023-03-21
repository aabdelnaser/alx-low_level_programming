#include <stdio.h>

/*
 * main - function that prints the name of the file it
 *        was compiled from, followed by a new line.
 *
 * Returns : ALways 0 (Success)
 */
int main(void)
{
	printf(__FILE__);
	printf("%s\n");

	return (0);
}
