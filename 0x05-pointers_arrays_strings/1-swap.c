#include "main.h"
/**
 * swap_int - swap the values of two integers a and b
 * @a: first integer.
 * @b: second integer.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int *e;

	*e = *a;
	*a = *b;
	*b = *e;
}
