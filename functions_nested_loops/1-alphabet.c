#include "main.h"

/**
 * main - Point d'entrée du programme
 * Affiche "_putchar" suivi d'une nouvelle ligne.
 * Return: Toujours 0 (Succès)
 */

void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
