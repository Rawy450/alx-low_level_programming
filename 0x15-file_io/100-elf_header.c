#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_elf_header - Prints the ELF header of a file.
 * @filename: The name of the file to print the ELF header of.
 */
void print_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr ehdr;
	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		perror("open");
		return;
	}
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
		perror("read");
		close(fd);
		return;
	}
	close(fd);
	printf("ELF header:\n");
	printf("  Magic:               %02x %02x %02x %02x\n",
	       ehdr.e_ident[0], ehdr.e_ident[1],
	       ehdr.e_ident[2], ehdr.e_ident[3]);
	printf("  Class:               %d\n", ehdr.e_ident[4]);
	printf("  Data:                %d\n", ehdr.e_ident[5]);
	printf("  Version:             %d\n", ehdr.e_ident[6]);
	printf("  OS/ABI:              %d\n", ehdr.e_ident[7]);
	printf("  ABI Version:         %d\n", ehdr.e_ident[8]);
	printf("  Type:                %d\n", ehdr.e_type);
	printf("  Entry point address:  0x%08x\n", ehdr.e_entry);
}
/**
 * main - Prints the ELF header of a file.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc)
