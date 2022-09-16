#include "main.h"

/**
 * print_most_numbers - print 0-9 7 skip 2 & 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		if (b != 50 && b != 52)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
