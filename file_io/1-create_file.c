#include "main.h"

/**
 * create_file - create a file 0600 permission
 * @filename: pointer to name of file
 * @text_content: pointer to text to write in file
 * Return: 1 succes or -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fic;
	int len = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	fic = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fic == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		written = write(fic, text_content, len);
		if (written == -1 || written != len)
		{
			close(fic);
			return (-1);
		}
	}

	close(fic);
	return (1);
}
