#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}