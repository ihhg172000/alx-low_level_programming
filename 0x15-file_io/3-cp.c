#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFSIZE 1024

void safe_close(int fd);

/**
* main - program copies the content of a file to another file
* @ac: argument count
* @av: argument vector
*
* Return: 1 always
*/
int main(int ac, char *av[])
{
	int fd_from, fd_to, br;
	char buff[BUFFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(
			av[2],
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}

	do {
		br = read(fd_from, buff, BUFFSIZE);
		write(fd_to, buff, br);
	} while (br);

	safe_close(fd_from);
	safe_close(fd_to);

	return (0);
}

/**
* safe_close - function closes a file decriptor
* @fd: the file decriptor
*/
void safe_close(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
