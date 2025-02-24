#include "main.h"

/**
 * print_line - Trace une ligne droite en utilisant le caractère _.
 * @n: Le nombre de caractères _ à afficher.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
