#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return:Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		for (i = 65; i <= 122; i++)
		{
			_putchar(i);
		}
		n++;
	}
	_putchar('\n');
}
