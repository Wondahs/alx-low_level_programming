#include "main.h"

/**
 *create_file - Creates a file
 *@filename: name of file
 *@text_content: source file
 *
 *
 *Return: 1 if successful, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int file, written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	written = write(file, text_content, len);
	if (written == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
