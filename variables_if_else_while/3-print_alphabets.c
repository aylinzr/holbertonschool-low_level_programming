#include <stdio.h>
/**
 * main - Point d'entrée du programme
 * Description: Affiche l'alphabet en minuscules et majuscules, suivi d'une nouvelle ligne
 */
int main(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	c = 'A';
	while(c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
