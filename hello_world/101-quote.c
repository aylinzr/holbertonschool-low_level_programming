#include <unistd.h>

/**
 * main - Affiche une citation sur la sortie d'erreur standard
 *
 * Return: Toujours 1 (Erreur attendue)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

