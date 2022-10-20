#include <stdio.h>

/**
 * main - Program to print the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * and followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	long int c, f, s, nxt;

	f = 1;

	s = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (f != 2163150047)
		{
			printf("%ld, ", f);
		}
		else
		{
			printf("%ld\n", f);
		}
		nxt = f + s;
		f = s;
		s = nxt;
	}
	return (0);
}
