#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: content added
 *
 * Return: 1 if file exists, -1 if it doesn't.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, nlet, rwr;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;
		rwr = write(f, text_content, nlet);
		if (rwr == -1)
			return (-1);
	}
	close(f);
	return (1);
}
