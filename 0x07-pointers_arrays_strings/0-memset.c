#include"main.h"
/**
  * _memset - function that fills memory with a constant byte
  * @n: max bytes use but the constant
  * @b: constant
  * @s: the constant byte b
  * Return: a pointer to put the constant
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for ((itr = 0, n > 0, itr++, n--);
	{
		s[itr] = b;
	}

	return (s);
}			}
