#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscules suivi d'une nouvelle ligne
 * Description: Cette fonction utilise `_putchar` pour afficher
 * chaque lettre de l'alphabet en minuscule, puis une nouvelle ligne.
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
