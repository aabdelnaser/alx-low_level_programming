##include "function_pointers.h"
/**
  * int_index - program that searches for an integer
  * @array: a declared array of type int
  * @size: size of the array
  * @cmp: pointer of the function
  *
  * Return: int
  * Name: Ahmed Abdel Nasser
  * ALX Software Engineering Cohort 12
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0 ; i < size ; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
