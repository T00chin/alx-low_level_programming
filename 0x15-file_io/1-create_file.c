#include "main.h"

/**
 * create_file - creates in a file
 * @filename: file name
 * @text_content: content written into the file
 *
 * Return: 1 on success, -1 on fail.
 */
int create_file(const char *filename, char *text_content)
{
	int f, nlet, rwr;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nlet = 0; text_content[nlet]; nlet++)
		;
	rwr = write(f, text_content, nlet);
	if (rwr == -1)
		return (-1);
	close(f);
	return (1);
}
