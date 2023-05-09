#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: file name
 * @letters: number of letters printed.
 *
 * Return: no of letters printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *buff;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	rd = read(f, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(f);

	free(buff);

	return (wr);
}
