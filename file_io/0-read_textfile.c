#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: pointer const char
 * @letters: numbers of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fic = 0;
	char buffer[2000];
	ssize_t count;

	if (filename == NULL)
	{
		return (0);
	}

	fic = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
	count = read(fic, buffer, letters);
		if (count == -1)
		{
			return (0);
		}

	write(STDOUT_FILENO, buffer, count);

	close(fic);

	return (count);
}
