#include "main.h"

/**
 * print_alphabet_x10 - Affiche l'alphabet 10 fois,
 * chaque fois suivi d'une nouvelle ligne.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)

		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
