#include "main.h"

/**
 * print_line - prints a line depending on n times
 * @n: input value
 * Return: nothing
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
