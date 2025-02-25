#include <stdio.h>

/**
 * main - Affiche les nombres de 1 à 100, mais pour les multiples de trois,
 *        Fizz est affiché à la place du nombre, pour les multiples de cinq,
 *        Buzz, et pour les multiples de trois et cinq, FizzBuzz.
 * Return: Toujours 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
