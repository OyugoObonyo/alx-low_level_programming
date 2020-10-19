#include "dog.h"

/**
*init_dog-initialize a structure
*@d:pointer to a structure
*@name:parameter name
*@age:parameter name
*@owner:parameter name
*Return:nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
