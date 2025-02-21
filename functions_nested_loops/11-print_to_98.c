#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 * Description: This function prints all natural numbers from the given `n`
 * to `98`, in order, separated by a comma and a space, followed by a newline.
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
		printf("%i, ", i);
	for (i = n; i > 98; i--)
		printf("%i, ", i);
	printf("98\n");
}
