#include "main.h"
#include <stdio.h>

/**
* main - copies contents of one file to other file
* @ac: number of arguments
* @av: argument vector
*
* Return: 0 on success
*/

int main(int argc, char **argv)
{
	int src_fd, dest_fd, close_status, bytes_written, bytes_read;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	while (1)
	{
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

		if (bytes_read > 0)
		{
			bytes_written = write(dest_fd, buffer, bytes_read);
			if (bytes_written == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		}
		else
			break;
	}

	close_status = close(src_fd);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);

	close_status = close(dest_fd);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

	return (0);
}
