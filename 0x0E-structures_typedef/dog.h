#ifndef _TASK_DOG_HEADER_
#define _TASK_DOG_HEADER_

/**
 * struct dog - Dog Features
 * @name: Dog Name.
 * @age: Dog Age.
 * @owner: Dog Owner.
 *
 * Description : Attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* 
 * dog_poppy - Typedef for dog features
 */

typedef struct dog dog_poppy;

void first_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_poppy *new_dog(char *name, float age, char *owner);
void poppy(dog_poppy *d);

#endif
