#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Description: Affiche l'alphabet en minuscules suivi d'une nouvelle ligne
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
