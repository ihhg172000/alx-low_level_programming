#include "main.h"

/**
* read_textfile - function reads a text file and prints it to the POSIX stdout
* @filename: name of the file to read it
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t br;
	ssize_t bw;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	br = read(fd, buff, letters);
	bw = write(STDOUT_FILENO, buff, br);

	if (br != bw)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);

	return (bw);
}
