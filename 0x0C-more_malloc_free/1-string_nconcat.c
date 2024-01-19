#include "main.h"

/**
  * string_nconcat - This function joins two strings together
  * @s1: The first string
  * @s2: The second string
  * @n: Size of memeory to be allocated
  *
  * Return: The joined string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0, index = 0;
	char *ptr;

	s1 = check(s1);
	s2 = check(s2);

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((sizeof(char) * (len1 + n)) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (s1[length] != '\0')
	{
		ptr[length] = s1[length];
		length++;
	}

	for (i = 0; i < n; i++)
	{
		ptr[length] = s2[i];
		length++;
	}

	ptr[length] = '\0';
	return (ptr);
}

/**
 * check - This function treats a NULL string
 * @str: The string to be checked
 *
 * Return: An empty string
 */

char *check(char *str)
{
	if (str == NULL)
	{
		str = "";
	}
	return (str);
}
