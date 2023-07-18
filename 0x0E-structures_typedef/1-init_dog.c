#include "dog.h"

/**
*init_dog - a program that initialize a variable of type struct dog
*@d: pointer
*@owner: Bob
*@name: poppy
*@age: 3.5
*Return: Nothing
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
