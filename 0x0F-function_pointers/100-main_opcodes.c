#include <stdio.h>
#include <stdio.h>
/**
 * print_opcodes - program that prints opcodes
 * @bytesNumber - number of the bytes
 * @p - address of function
 *
 * Return: Void
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

void print_opcodes(char *p, int bytesNumber)
{
	int i; 

	i = 0;
	while (i < bytesNumber)
	{
		printf("%.2hhx", p[i]);
		if (i < bytesNumber - 1)
		{
			printf("");
		}
		i++;
	}
}
/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of passed arguments to function
 * @argv: Array of pointers to arguments
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int main(int argc, char **argv)
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, bytes);
	return (0);
}
