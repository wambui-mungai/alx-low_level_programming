#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to name of the file
 * @letters: number of letters to be read and printed
 * Return: actual number of letters it could read
 * and print 0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	
	o = open(filename, 0_RDONLY);

	if (o == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);

	w = write(STDOUT_FILENO, o, r);

	close(0);

	return (w);
}

