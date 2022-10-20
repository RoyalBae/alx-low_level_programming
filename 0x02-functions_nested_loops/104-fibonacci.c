#include <stdio.h>

/**
 * main - It finds and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int p, q, r, q2, q3, r2, r3;

	q = 1;
	r = 2;

	printf("%lu", q);

	for (p = 1; p < 91; p++)
	{
		printf(", %lu", r);
		r = r + q;
		q = r - q;
	}
	q2 = q / 1000000000;
	q3 = q % 1000000000;
	r2 = r / 1000000000;
	r3 = r % 1000000000;

	for (p = q2; p < 99; ++p)
	{
		printf(", %lu", r2 + (r3 / 1000000000));
		printf("%lu", r3 % 1000000000);

		r2 = r2 + q2;
		q2 = r2 - q2;
		r3 = r3 + q3;
		q3 = r3 - q3;
	}
	printf("\n");

	return (0);
}
