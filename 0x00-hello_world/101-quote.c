#include<unistd.h>
/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *  ssize-t write(int fd, const void *buf, size-t count);
 *
 * Return: 1 (error)
*/


int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora korpa, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
