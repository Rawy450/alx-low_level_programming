#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - function that returns the sum
  * @n: input
  * Return: always 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = n, sum = 0;

	va_start(args, n);

	if (!n)
		return (0);

	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
