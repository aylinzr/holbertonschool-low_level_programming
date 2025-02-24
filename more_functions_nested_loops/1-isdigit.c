#include "main.h"

/**
 * _isdigit - Vérifie si un caractère est un chiffre (0-9).
 * @c: Le nombre à vérifie
 * Return: 1 si le nombre est un chiffre, 0 sinon.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
