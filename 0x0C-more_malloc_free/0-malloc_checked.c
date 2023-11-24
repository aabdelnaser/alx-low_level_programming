#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b : an unsigned integer for memory allocation
 *
 * Return: pointer type to the allocated memory
 *
 * Name : Ahmed Abdel Nasser
 * email: ahmedfathyme.af@gmail.com
 */
void *malloc_checked(unsigned int b){
	int *memory = malloc(b);

	if(memory != 0)
	{
		return (memory):
	}
	else
	{
		exit(98);
	}
}
