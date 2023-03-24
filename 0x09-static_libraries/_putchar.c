#include <unistd.h>
#include "main.h"
/**
 * _putchar - function that prints character
 * @c: Passed Parameter
 *
 * Return: Always 0.
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
