#include<main.h>
/**
  * *_strcat - function that concatenates two strings
  *
  * @dest: input1
  * @src: input2
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;


	while (dest[s1])
		s1++;
	for (s2 = 0; src[s2]; s2++)

		dest[s1++] = src[s2];
	return (0);
}

