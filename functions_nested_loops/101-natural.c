#include <stdio.h>

/**
 * main - Liste tous les nombres naturels inférieurs à 1024 (exclus)
 *        qui sont des multiples de 3 ou 5.
 * Return: Toujours 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
