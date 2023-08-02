#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int kl, ml, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (kl = 0; name[kl]; kl++)
		;
	kl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < kl; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (ml = 0; owner[ml]; ml++)
		;
	ml++;
	dog->owner = malloc(ml * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < ml; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
