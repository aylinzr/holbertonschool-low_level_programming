#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
