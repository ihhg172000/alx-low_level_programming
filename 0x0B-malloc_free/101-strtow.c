#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
* words_count - function that counts words in a string
* @str: string to count how many words it contains
*
* Return: words count
*/
int words_count(char *str)
{
	int count = 0, i;
	bool ready_for_next_word = true;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (ready_for_next_word)
			{
				ready_for_next_word = false;
				count++;
			}
		}
		else if (!ready_for_next_word)
		{
			ready_for_next_word = true;
		}
	}

	return (count);
}

/**
* strtow - function that splits a string into words
* @str: string to be splited into words
*
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	char **words;
	int count = words_count(str), length = strlen(str), i, j, n, start, end;
	bool ready_for_next_word = true;

	if (str == NULL || count == 0)
		return (NULL);

	words = (char **) malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i <= length; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			if (ready_for_next_word)
			{
				ready_for_next_word = false;
				start = i;
			}
		}
		else if (!ready_for_next_word)
		{
			ready_for_next_word = true;
			end = i - 1;

			words[j] = (char *) malloc((end - start) * sizeof(char) + 2);
			if (words[j] == NULL)
				return (NULL);

			for (n = 0; start <= end; n++)
				words[j][n] = str[start++];

			words[j][n] = '\0';

			j++;
		}
	}

	return (words);
}
