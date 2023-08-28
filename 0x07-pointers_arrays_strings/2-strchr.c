#include"main.h"
/**
  * _strch -  function that locates a character in a string
  * @s: input1
  * @c: input 2
  * Return: point to s
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
