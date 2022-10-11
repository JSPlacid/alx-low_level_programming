#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that init a variable of type struct dog
 * @d: pointer tothe struct dog
 * @name: string name
 * @age: a floar age
 * @owner: string owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner =owner;
}
