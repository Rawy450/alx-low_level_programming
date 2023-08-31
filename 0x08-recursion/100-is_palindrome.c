#include "main.h"
#include <stdio.h>
/**
  * is_palindrome -  string is a palindrome
  * @s: input
  * Return: 1 if a string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return 0;
		}
		left++;
		right--;
	}

	return 1;
}
