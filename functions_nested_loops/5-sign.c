#include "main.h"

/**
 * print_sign - Affiche le signe d'un nombre
 * @c: Le caractère à vérifi
 * Return: 1 si c est une minuscule, 0 sinon
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
