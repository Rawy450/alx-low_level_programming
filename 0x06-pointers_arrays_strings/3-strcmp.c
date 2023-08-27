#include"main.h"
#include<string.h>
/**
  * _strcmp - function that compares two strings.
  * @s1: input 1
  * @s2: input2
  * return: 1 if true, 0 if fales
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s2++;
		s2++;
	}
	return (i);
}
