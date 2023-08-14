#include "dog.h"
#include <string.h>

/**
 *init_dog - Initializes elements of struct dog
 *@d: Structure
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
