#include <stdio.h>
#include "dog.h"
/**
 * init_dog - main
 * @d: var 1
 * @name: var 2
 * @age: var 3
 * @owner: var 4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
