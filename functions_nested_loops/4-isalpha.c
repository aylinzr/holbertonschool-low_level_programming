#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est une lettre alphabéte
 * @c: Le caractère à vérifi
 * Return: 1 si c est une minuscule, 0 sinon
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
