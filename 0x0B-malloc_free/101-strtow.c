#include "main.h"

/**
 * strtow - Split a string into words
 * @str: The string to be splitted into words(strings)
 *
 * Return: A pointer to the array of strings
 */

char **strtow(char *str)
{
	char **ptr, *strr;
	int i = 0, j, index, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	strr = convert_short(str);
	ptr = alloc_mem(strr);

	while (strr[i] != '\0')
	{
		if (strr[i] == ' ')
		{
			count++;
		}
		i++;
	}
	index = 0;

	for (i = 0; i < count + 1; i++)
	{
		j = 0;
		while (strr[index] != '\0')
		{
			ptr[i][j] = strr[index];
			j++;

			if (strr[index + 1] == ' ' || strr[index + 1] == '\0')
			{
				ptr[i][j] = '\0';
				index = index + 2;
				break;
			}
			index++;
		}
	}
	ptr[count + 1] = NULL;
	return (ptr);
}


/**
 * convert_short - Remove excess space in a string
 * @src: The string to be edited
 *
 * Return: The edited string
*/

char *convert_short(char *src)
{
	int i, index = 0, length = 0;
	char *ptr;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] != ' ')
		{
			length++;

			if (src[i - 1] == ' ' || src[i + 1] == '\0')
			{
				length++;
			}
		}
	}
	ptr = malloc((sizeof(char) * length) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] != ' ')
		{
			ptr[index] = src[i];
			index++;

			if (src[i + 1] == ' ' || src [1 + i] == '\0')
			{
				ptr[index] = ' ';
				index++;
			}
		}
	}
	ptr[index] = '\0';
	return (ptr);
}


/**
 * alloc_mem - Create memories to accomodate a array of string
 * @arr: The single string to be splitted
 *
 * Return: A pointer to a 2D array
*/

char **alloc_mem(char *arr)
{
	int i = 0, count = 0, index = 0, j, length;
	char **strr;

	while (arr[i] != '\0')
	{
		if (arr[i] == ' ')
		{
			count++;
		}
		i++;
	}
	strr = (char **)malloc(sizeof(char *) * (count + 2));

	if (strr == NULL)
		return (NULL);
	for (i = 0; i < count + 1; i++)
	{
		length = 1;
		while (arr[index] != '\0')
		{
			length++;
			if (arr[index + 1] == ' ' || arr[index + 1] == '\0')
			{
				strr[i] = malloc(sizeof(char) * length);
				if (strr[i] == NULL)
				{
					for (j = i; j >= 0; j--)
					{
						free(strr[j]);
					}
					free(strr);
					return (NULL);
				}
				index = index + 2;
				break;
			}
			index++;
		}
	}
	return (strr);
}
