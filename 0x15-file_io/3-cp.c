#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libgen.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits with the given code
 * @msg: The error message to print
 * @filename: The name of the file related to the error
 * @code: The exit code
 *
 * Return: void
 */
void print_error_and_exit(const char *msg, const char *filename, int code)
{
char *base = basename((char *)filename);

dprintf(STDERR_FILENO, "%s: %s\n", msg, base);
exit(code);
}

/**
 * copy_file - Copies the content of a file to another file
 * @src_fd: The file descriptor of the source file
 * @dest_fd: The file descriptor of the destination file
 * @src_name: The name of the source file
 * @dest_name: The name of the destination file
 *
 * Return: void
 */
void copy_file(int src_fd, int dest_fd, const char *src_name,
	       const char *dest_name)
{
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];

while ((bytes_read = read(src_fd, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written != bytes_read)
print_error_and_exit("Error: Can't write to file", dest_name, 99);
}

if (bytes_read == -1)
print_error_and_exit("Error: Can't read from file", src_name, 98);
}

/**
 * main - Entry point. Copies the content of a file to another file.
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, or exit with error codes 97, 98, 99, or 100
 */
int main(int argc, char *argv[])
{
int src_fd, dest_fd;

if (argc != 3)
print_error_and_exit("Usage: cp file_from file_to", "", 97);

src_fd = open(argv[1], O_RDONLY);
if (src_fd == -1)
print_error_and_exit("Error: Can't read from file", argv[1], 98);

dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (dest_fd == -1)
print_error_and_exit("Error: Can't write to file", argv[2], 99);

copy_file(src_fd, dest_fd, argv[1], argv[2]);

if ((close(src_fd) == -1) || (close(dest_fd) == -1))
print_error_and_exit("Error: Can't close file descriptor", "", 100);

return (0);
}
