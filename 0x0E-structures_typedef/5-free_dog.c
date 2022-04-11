#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: puntero a dog
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
	else
		return;
}
