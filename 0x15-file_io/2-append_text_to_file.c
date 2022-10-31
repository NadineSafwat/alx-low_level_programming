#include "main.h"

/**
 * append_text_to_file - appends text to file end
 * @filename: filename
 * @text_content: new content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int handle;
	int nlett;
	int rewr;

	if (!filename)
	{
		return (-1);
	}

	handle = open(filename, O_WRONLY | O_APPEND);

	if (handle == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;
		rewr = write(handle, text_content, nlett);

		if (rewr == -1)
		{
			return (-1);
		}
	}

	close(handle);

	return (1);
}
