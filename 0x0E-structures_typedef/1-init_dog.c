#include <stdlib.h>
#include "dog.h"

/**
 * first_dog - Initializes a poppy features
 * @d: A dog feature.
 * @name: Dog Name.
 * @age: Dog Age.
 * @owner: Dog Owner.
 *
 * Return: Nothing
 *
 * Name: Ahmed Abdel Nasser
 * ALX Software Engineering Cohort 12
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
