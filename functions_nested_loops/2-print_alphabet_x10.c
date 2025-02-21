#include "main.h"

/**
 * print_alphabet_x10 - Affiche l'alphabet en minuscules 10 fois
 * Description: Cette fonction utilise deux boucles imbriquées.
 * La première boucle exécute 10 fois l'affichage de l'alphabet.
 * La seconde boucle affiche chaque lettre de 'a' à 'z'.
 * Chaque alphabet affiché est suivi d'une nouvelle ligne.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = '1'; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)

		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
