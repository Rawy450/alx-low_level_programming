#include <stdio.h>
#include"dog.h"
/**
  * init_dog - function of dog struct
  * @name: input
  * @owner: input2
  * @age: input3
  * @d: inp
  * Return: Always 0
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
