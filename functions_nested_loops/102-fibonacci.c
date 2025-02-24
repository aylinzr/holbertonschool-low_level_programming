#include <stdio.h>

/**
 * main - Affiche les 50 premiers nombres de Fibonacci, en commençant par 1 et 2,
 *        séparés par une virgule suivie d'un espac
 * Return: Toujours 0.
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
