#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - Create a file with the specified permissions
 * truncate if it exists, and write text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * The created file has permissions: rw-------
 * If the file already exists, permissions are not changed.
 * If the file already exists, it is truncated.
 * If filename is NULL, return -1.
 * If text_content is NULL, an empty file is created.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int r;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	r = write(fd, text_content, letters);

	if (r == -1)
		return (-1);

	close(fd);

	return (1);
}
