#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int h;
va_list ra;
const char *s;

va_start(ra, n);

for (h = 0; h < n; h++)
{
s = va_arg(ra, const char *);

if (s != NULL)
printf("%s", s);
else
printf("(nil)");

if (h < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(ra);
}
