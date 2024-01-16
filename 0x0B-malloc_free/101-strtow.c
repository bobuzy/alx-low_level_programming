#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - This function locates the index marking the end of the first
 * word contained within a string.
 * @str: String
 * Return: Index marking the end of the initial word pointed to by str
 */

int word_len(char *str)
{
	int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
 * count_words - This function counts the number of words contained
 * in a string.
 * @str: String
 * Return: The number of words contained within the string str
 */

int count_words(char *str)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	}

	return (w);
}

/**
 * strtow - This function splits a string into words
 * @str: String
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * otherwise, a pointer to an array of strings (wo)
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

