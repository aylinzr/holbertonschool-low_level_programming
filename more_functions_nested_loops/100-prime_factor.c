#include <stdio.h>

/**
 * main - Trouve et affiche le plus grand facteur
 *        premier du nombre 612852475143.
 * Return: Toujours 0.
 */

int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
