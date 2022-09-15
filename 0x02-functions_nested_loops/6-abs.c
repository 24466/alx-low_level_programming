#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: integer value
 * Return: Always 0 (Success)
 */
int _abs(int a)
{
	int b;

	if (a < 0)
	{
		b = abs(a);
		return (b);
	}
	else
	{
		return (a);
	}
	return (0);
}
