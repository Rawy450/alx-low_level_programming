#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include"main.h"
/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int c, v = 0, write_len;

	if (filename == NULL)
		return (-1);

	c = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (c == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[v])
			v++;

		write_len = write(c, text_content, v);

		if (write_len != v)
		{
			close(c);
			return (-1);
		}
	}

	close(c);
	return (1);
}
