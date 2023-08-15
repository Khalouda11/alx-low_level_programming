#include "dog.h"

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void
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
