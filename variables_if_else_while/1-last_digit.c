#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Point d'entrée du programme
 * Description: Affiche le dernier chiffre d'un nombre aléatoire
 * et indique s'il est >5, 0 ou <6 et ≠0.
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}

	return (0);
}
