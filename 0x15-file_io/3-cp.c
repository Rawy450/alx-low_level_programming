#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 *  main - Copies the content of one file to another.
 *  @argc: The number of arguments.
 *  @argv: The array of arguments.
 *  Return: 0 on success, or an error code on failure.
 */

int main(int argc, char *argv[])
{
	int c_from, c_to, r, w;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	c_from = open(argv[1], O_RDONLY);

	if (c_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	c_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (c_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(c_from);
		return (99);
	}

	while ((r = read(c_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(c_to, buffer, r);

		if (w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(c_from);
			close(c_to);
			return (99);
		}
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(c_from);
		close(c_to);
		return (98);
	}

	if (close(c_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c_from);
		return (100);
	}

	if (close(c_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c_to);
		return (100);
	}

	return (0);
}
