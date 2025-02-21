#include "main.h"

/**
 * _islower - Vérifie si un caractère est en minuscule
 * @c: Le caractère à vérifi
 * Return: 1 si c est une minuscule, 0 sinon
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
