#include <stdio.h>

/**
 * main - Program to print the first 50 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	long int c, f, s, next;

	f = 1;

	s = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (f != 165580141)
		{
			printf("%ld, ", f);
		}
		else
		{
			printf("%ld\n", f);
		}
		next = f + s;
		f = s;
		s = next;
	}
	return (0);
}
