#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: content writed in the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int handle, nlett, rewr;

	if (!filename)
	{
		return (-1);
	}

	handle = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (handle == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (nlett = 0; text_content[nlett]; nlett++)
		;

	rewr = write(handle, text_content, nlett);

	if (rewr == -1)
	{
		return (-1);
	}

	close(handle);

	return (1);
}
