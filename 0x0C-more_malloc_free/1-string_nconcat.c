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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	m = malloc(sizeof(char) * l + 1);
	if (m == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			m[j] = s1[j];

		if (j >= i)
		{
			m[j] = s2[k];
			k++;
		}
		j++;
	}
	m[j] = '\0';
	return (m);
}
