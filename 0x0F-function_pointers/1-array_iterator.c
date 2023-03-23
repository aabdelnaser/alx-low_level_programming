#include "function_pointers.h"
#include "stdlib.h"
/**
 * array_iterator - a function as parameter
 *                  on each element of an array.
 *
 * @array: An declared array of type int
 * @size: Declared Size of array
 * @action:  Pointer to the function
 * Return: Void
 *
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array  && action)
	{
	for (i = 0 ; i  < (int)  size ; i++)
	{
		action(array[i]);
	}
	}
}
