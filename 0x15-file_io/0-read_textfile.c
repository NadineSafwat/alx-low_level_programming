#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: the name of the file
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed and 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int handle;
	ssize_t nmrd, nmwr;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	handle = open(filename, O_RDONLY);

	if (handle == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}

	nmrd = read(handle, buf, letters);
	nmwr = write(STDOUT_FILENO, buf, nmrd);

	close(handle);

	free(buf);

	return (nmwr);
}
