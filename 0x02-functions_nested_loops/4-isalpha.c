#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Parameter to to be checked
 * Return: 1 if it"s true, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= "Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n')
}

