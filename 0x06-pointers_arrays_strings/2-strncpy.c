#include"main.h"
/**
  * _strncpy - function that copies a string
  * @dest: input1
  * @src: input2
  * @n: input most number bytes from @src
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
		
	for (i = 0; i < n && src[i] != '\0'; i++)
	
		dest[i] = src[i];
	
	while (i < n)
	{
		dest[i] != '\0';
		i++;
	}
	return (dest);
}
