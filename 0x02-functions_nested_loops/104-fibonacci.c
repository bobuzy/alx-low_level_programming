#include <stdio.h>

/**
 * main - This syntax is for fibonacci <3
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n;
	unsigned long int pre = 1;
	unsigned long int post = 2;
	unsigned long int l = 1000000000;
	unsigned long int pre1;
	unsigned long int pre2;
	unsigned long int post1;
	unsigned long int post2;

	printf("%lu", pre);

	for (n = 1; n < 91; n++)
	{
		printf(", %lu", post);
		post += pre;
		pre = post - pre;
	}

	pre1 = (pre / l);
	pre2 = (pre % l);
	post1 = (post / l);
	post2 = (post % l);

	for (n = 92; n < 99; ++n)
	{
		printf(", %lu", post1 + (post2 / l));
		printf("%lu", post2 % l);
		post1 = post1 + pre1;
		pre1 = post1 - pre1;
		post2 = post2 + pre2;
		pre2 = post2 - pre2;
	}
	printf("\n");
	return (0);
}
