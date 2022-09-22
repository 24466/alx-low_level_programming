#include <stdio.h>
#include <string.h>
/**
 * rev_string - prina string in reverse
 * @s: string input value
 * Return: nothing
 */

char rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		s[i] = temp;
		s[i] s[len - i - 1];
		s[len - i - 1] = temp;
	}
	putchar('\n');
}
