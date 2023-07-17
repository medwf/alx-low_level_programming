#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - a function that creates a new dog.
 *@name: name new dog.
 *@age: age new dog.
 *@owner: ownwer new dog.
 *Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0;

	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	dog->name = malloc(sizeof(char) * len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
