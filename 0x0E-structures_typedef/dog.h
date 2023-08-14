#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Dog structure
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 *dog_t - Typedef for dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
