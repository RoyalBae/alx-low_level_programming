#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: the character
 * Return: 1 if the character is lowercase, 0 if it is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
