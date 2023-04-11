#include <stdlib.h>

/**
* argstostr - unction that concatenates all the arguments of program
* @ac: argument count
* @av: argumebt vecror
*
* Return: pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int size = 0, i, j, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;

		size++;
	}

	size++;

	ptr = (char *) malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, c = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[c] = av[i][j];
			c++;
		}

		ptr[c] = '\n';
		c++;
	}

	return (ptr);
}
