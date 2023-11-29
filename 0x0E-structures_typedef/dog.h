#ifndef DOG_H
#define DOG_H
/**
 * struct_dog - Dog's Info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: It holds the dog's specifications
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_deftype;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
