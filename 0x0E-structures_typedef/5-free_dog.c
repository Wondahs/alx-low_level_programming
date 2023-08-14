#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees memory allocated for struct dog
 *@d: Dog to be freed
 *
 *Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
