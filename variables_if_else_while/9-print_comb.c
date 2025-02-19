#include <stdio.h>

/**
 * main - Affiche toutes les combinaisons possibles de chiffres uniques (0-9)
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int n;

	for (n = 48; n < 57; n++)  /* 48 = '0' et 57 = '9'en ASCII */
	putchar(n);
	if (n != 57)
	{
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
