#include "main.h"

/**
* append_text_to_file - function appends text at the end of a file
* @filename: the file name
* @text_content: the content to be appended to the file
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		bw = write(fd, text_content, strlen(text_content));
		if (bw != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
