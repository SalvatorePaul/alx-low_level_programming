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
	int fd, len = 0;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	
	while (text_content && text_content[len] != '\0')
		len++;

	if (!len)
		write(fd, "", len);
	else
		write(fd, text_content, len);

	close(fd);

	return (1);
}
