#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints _putchar
 *
 * Return: Always 0
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
