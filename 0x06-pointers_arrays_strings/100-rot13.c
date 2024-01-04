#include "main.h"

/**
 * rot13 - This function encodes a string using rot13
 * @n: pointer to string params
 *
 * Return: The encoded string
 */

char *rot13(char *n)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == data1[j])
			{
				n[i] = datarot[j];
				break;
			}
		}
	}
	return (n);
}
