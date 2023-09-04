#include "main.h"

/**
 *append_text_to_file - Appends text to file
 *@filename: Name of file
 *@text_content: Content
 *
 *Return: 1 if success, -1 othwrwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file = open(filename, O_RDWR | O_APPEND);
	written = write(file, text_content, len);

	if (file == -1 || written == -1)
		return (-1);

	close(file);

	return (1);
}
