#include"main.h"
/**
  * *_strcat - function that concatenates two strings
  * @dest: input1
  * @src: input2
  * @n: input most number bytes from @src
  * Return: @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int s1;
	int s2;

	s1 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}
	s2 = 0;

	while (s2 < n && src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	/* null terminate dest*/
	dest[s1] = '\0';
	return (dest);
}
