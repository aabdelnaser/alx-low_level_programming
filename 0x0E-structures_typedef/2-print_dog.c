#include "stdlib.h"
#include "stdio.h"
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d : the information of the dog to print.
 *
 * Name: Ahmed Abdel Nasser
 * e-mail: ahmedfathyme.af@gmail.com
 */
void print_dog(struct dog *d)
{
	if((*d).name == NULL)
		(*d).name = "(nil)";

	if((*d).owner == NULL)
		(*d).owner = "(nil)";

	if (d == NULL)
		return;
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
