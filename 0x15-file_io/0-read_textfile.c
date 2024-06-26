#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 *         If the file can't be opened or read, return 0
 *         If filename is NULL, return 0
 *         If write fails or doesn't write the expected amnt of bytes, rtrn 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, bytes_read, bytes_written;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buf, letters);
if (bytes_read == -1)
{
free(buf);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buf, bytes_read);
free(buf);
close(fd);

if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
return (0);

return (bytes_written);
}
