#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates a file with specified content
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, bytes_written, permissions;

if (filename == NULL)
return (-1);

permissions = S_IRUSR | S_IWUSR;  /* rw------- */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
