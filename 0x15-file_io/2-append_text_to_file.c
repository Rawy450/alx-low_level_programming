#include <fcntl.h>
#include <unistd.h>

/**
 *  append_text_to_file - Appends text to the end of a file.
 *  @filename: The name of the file.
 *  @text_content: The text to append.
 *  Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, v = 0, write_len;

	if (filename == NULL)
		return (-1);

	c = open(filename, O_WRONLY | O_APPEND);

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
