#include "main.h"

/**
 * main - Point d'entrée du programme
 * Affiche "_putchar" suivi d'une nouvelle ligne.
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	char *str = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
