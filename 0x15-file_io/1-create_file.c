#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 * -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size_t content_len = 0;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		content_len = strlen(text_content);
		bytes_written = write(fd, text_content, content_len);
		close(fd);

		if (bytes_written == -1 || (size_t)bytes_written < content_len)
			return (-1);
	}
	else
	{
		close(fd);
	}
	return (1);
}
