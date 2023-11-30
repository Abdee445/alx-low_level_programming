#include "main.h"

/**
 * rot13 - main
 * @s: str
 * Return: 0
 */

char *rot13(char *s)
{
	int x = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + x) == alpha[i])
			{
				*(s + x) = rot13[i];
				break;
			}
		}
		x++;
	}
	return (s);
}
