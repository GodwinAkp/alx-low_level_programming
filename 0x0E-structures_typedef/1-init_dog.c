#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initiaslize a variable type struct dog
 * @d: name of the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
