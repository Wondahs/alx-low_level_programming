#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copies string from source to destination
 * @src: Source string
 * @dest: Destination string
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Calculates length of string
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 *new_dog - Creates a pointer to a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *
 *Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nLen;
	int oLen;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nLen = _strlen(name);
	oLen = _strlen(owner);

	dog->name = malloc(sizeof(char) * (nLen + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (oLen + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
