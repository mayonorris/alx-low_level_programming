#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * main - Entry level
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic: %x %x %x\n", header->e_ident[0], header->e_ident[1], header->e_ident[2]);
	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "32-bit" : "64-bit");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "Little Endian" : "Big Endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry Point Address: %lx\n", header->e_entry);
}
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (98);
    }
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return (98);
    }
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
