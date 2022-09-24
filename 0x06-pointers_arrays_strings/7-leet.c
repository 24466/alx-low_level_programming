#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */
char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	input upp_letters[] = {65, 69, 79, 84, 76};
	int numbrs[] = {52, 51, 48, 55, 49};

	while (*(s + count) != ;\0')
	{
		for (i = 0; 1 < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
