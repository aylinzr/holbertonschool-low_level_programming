#include <stdio.h>

/**
 * main - Point d'entrée du programme
 * Description: Affiche l'alphabet en minuscules et en majuscules,
 * suivi d'une nouvelle ligne.
 * Return: Retourne 0 pour indiquer que le programme s'est exécuté correcteme
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}

		else
		{
			ch++;
		}
	}

	putchar('\n');
	return (0);
}
