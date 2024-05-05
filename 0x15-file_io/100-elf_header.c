#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits with the given code
 * @msg: The error message to print
 * @code: The exit code
 */
void print_error_and_exit(const char *msg, int code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}

/**
 * print_elf_magic - Prints the ELF magic bytes
 * @header: Pointer to the ELF header structure
 */
void print_elf_magic(Elf64_Ehdr *header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
}

/**
 * print_elf_class - Prints the ELF class
 * @header: Pointer to the ELF header structure
 */
void print_elf_class(Elf64_Ehdr *header)
{
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
break;
}
}

/**
 * main - Entry point, displays the info contained in the ELF header of a file
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
print_error_and_exit("Usage: elf_header elf_filename", 98);

fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error_and_exit("Error: Cannot open file", 98);

if (read(fd, &header, sizeof(header)) != sizeof(header))
print_error_and_exit("Error: Cannot read ELF header", 98);

if (lseek(fd, 0, SEEK_SET) == -1)
print_error_and_exit("Error: Cannot reset file offset", 98);

printf("ELF Header:\n");
print_elf_magic(&header);
print_elf_class(&header);

close(fd);
return (0);
}
