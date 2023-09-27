#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int h;
va_list ra;

va_start(ra, n);

for (h = 0; h < n; h++)
{
printf("%d", va_arg(ra, int));

if (h < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(ra);
}
