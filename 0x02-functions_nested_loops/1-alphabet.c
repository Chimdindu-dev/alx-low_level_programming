#include "main.h"

/**
 * main - print alphabet
 *
 * Return:Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 65; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
