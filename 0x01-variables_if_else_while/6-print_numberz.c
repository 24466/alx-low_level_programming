#include <stdio.h>
/**
 * main - print base 10 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 48;

	while (l <= 57)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
