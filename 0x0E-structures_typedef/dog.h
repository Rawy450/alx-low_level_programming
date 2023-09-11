#ifndef DOG_H
#define DOG_H
/**
  *  struct dog - function of dog struct
  * @name: input
  * @owner: input2
  * @age: input3
  * Return: Always 0
  */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
