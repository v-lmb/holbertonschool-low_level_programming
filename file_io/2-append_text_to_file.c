#include "main.h"

/**
 * append_text_to_file - append text to the end of file
 * @filename: pointer to name of file
 * @text_content: pointer to text to write in file
 * Return: 1 succes or -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fic;
	int len = 0;
	ssize_t w;

	if (filename == NULL)
	{
		return (-1);
	}

	fic = open(filename, O_WRONLY | O_APPEND);
	if (fic == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fic);
		return (1);
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	w = write(fic, text_content, len);
	if (w == -1)
	{
		close(fic);
		return (-1);
	}

	close(fic);
	return (1);
}
