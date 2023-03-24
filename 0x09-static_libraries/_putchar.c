#include <unistd.h>
/**
 * _putchar - writes the character
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * Name : Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
