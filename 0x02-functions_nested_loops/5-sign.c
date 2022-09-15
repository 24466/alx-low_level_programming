#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer variable
 * Return: 1 0 or -1 depending on the condition met
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0')
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
