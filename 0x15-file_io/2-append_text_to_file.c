#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: content of the file
 * Return: 1 on success, -1 of failure
 * -1 if filename is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	FILE *file = fopen(filename, "a");

	if (file == NULL)
		return (-1);
	while (text_content && text_content[len] != '\0')
		len++;

	if (len)
		write(fd, text_content, len);

	return (1);
}
