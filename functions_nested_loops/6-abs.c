#include "main.h"

/**
 * _abs - Calcule la valeur absolue d'un entier
 * @n: L'entier dont on veut connaître la valeur absolu
 * Return: La valeur absolue de l'entier n
 * print_sign - Affiche le signe d'un entier
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n = n * -1);
	}
	else
		return (0);
}
