#include "main.h"

/**
 * read_textfile -  a function that reads a text file 
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: numbers of letters to be read
 *
 * Return:  actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write failes or does not return expected number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	
	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	
	char *buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	
	size_t bytesRead = fread(buffer, sizeof(char), letters, file);
	buffer[bytesRead] = '\0';/*Null-terminate the buffer to print properly.*/
	
	if (bytesRead == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	
	size_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	fclose(file);
	
	if (bytesWritten != bytesRead)
		return (0);
	
	return (bytesWritten);
}

