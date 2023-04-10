#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include<unistd.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to file name
 * @text-content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, buffer

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[fd] != '\0')
	{
		fd++;
	}
	buffer = open(filename, 0_WRONLY | O_APPEND);

	if (buffer == -1)
		return (-1);

	write(buffer, text_content, fd);

	return (1);
}
