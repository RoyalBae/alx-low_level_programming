#include <stdio.h>

/**
 * main - A program that finds and prints the sum of the even-valued
 * fibonacci terms
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long fib3 = 0, fib4 = 1, fibsum;
	float tota_sum;

	while (1)
	{
		fibsum = fib3 + fib4;

		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			tota_sum += fibsum;

		fib3 = fib4;
		fib4 = fibsum;
	}
	printf("%.0f\n", tota_sum);
	return (0);
}
