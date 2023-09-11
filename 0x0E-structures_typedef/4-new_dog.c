#include <stdlib.h>
#include "dog.h"
/**
  * _strlen - function that returns the length of a string
  * @s: input
  * Return: lenght of string
  */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
  * *_strcpy -  a function that copies the string pointed to by src
  * @dest: input 1
  * @src: input 2
  * Description: copies the string pointed to by src, including
  *		the terminating null byte (\0), to the buffer pointed to by dest
  * Return: pointer to 'dest'
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
  * *new_dog -  function that creates a new dog
  * @dog: input
  * @name: input2
  * @age: input3
  * @owner: input4
  * Return: always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog
		if (!name || age < 0 || !owner)
			return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1))
		if ((*dog). name == NULL)
		{
			free(dog);
			return (NULL);
		}
	 dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1))
		if ((*dog). owner == NULL)
		{
			free(dog->owner);
			free(dog);
			return (NULL);
		}
	 dog->name = _strcpy(dog->name, name);
	 dog->age = age;
	 dog->owner = _strcpy(dog->owner, owner);
