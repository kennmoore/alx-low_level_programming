/*
 * File: 5-free_dog.c
 * Auth: Kenneth Otieno
 */

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function with single argument
 * @d: pointer type
 *
 * Description: frees dogs
 * Return: 0
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
