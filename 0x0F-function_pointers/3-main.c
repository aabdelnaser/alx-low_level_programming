#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function calculator
 * @argc: a declared variable
 * @argv: a declared pointer
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
