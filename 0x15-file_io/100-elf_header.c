#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Displays an error message and exits the program.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_info - Displays information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_info(Elf64_Ehdr *header)
{
	printf("Magic: %x %x %x %x\n", header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3]);
	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
    /*Add more fields as needed*/
}

/**
 * main - Displays the information contained in the ELF header at the
 *        start of an ELF file.
 * @argc: Number of arguments passed into the program.
 * @argv: Array of arguments passed.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Can't open file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{display_error("Can't read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		display_error("Not an ELF file");
	}
	display_info(&header);
	close(fd);
    return (0);
}

