#include "main.h"


/**
 * print_last_digit - It prints the last digit
 * @j: the number to be printed
 * Return: value of the last digit
 */

int print_last_digit(int j)

{
	int last_digit = j % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
