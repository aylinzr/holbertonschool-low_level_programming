#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Return: Retourne 0 pour indiquer que le programme s'est exécuté correcteme
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');

	return (0);
}
