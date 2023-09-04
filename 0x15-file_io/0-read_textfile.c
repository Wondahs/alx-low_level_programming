#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of file to be read
 *@letters: the number of letters it should read and print
 *
 *
 *Return: the actual number of letters it could read and print, or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text = open(filename, O_RDONLY);
	ssize_t written;
	ssize_t bytesRead;
	char *buffer;

	if (filename == NULL)
		return (0);
	if (text == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(text);
		return (0);
	}

	bytesRead = read(text, buffer, letters);
	if (bytesRead == -1)
	{
		close(text);
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, letters);

	close(text);
	free(buffer);

	if (written == -1)
	{
		return (0);
	}
	if (written != bytesRead)
		return (bytesRead);

	return (written);
}
