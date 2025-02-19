#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Description: Affiche l'alphabet en minuscules et en majuscules,
 * suivi d'une nouvelle ligne.
 * Return: Retourne 0 pour indiquer que le programme s'est exécuté correcteme
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%i", n);

	putchar('\n');
	return (0);
}
