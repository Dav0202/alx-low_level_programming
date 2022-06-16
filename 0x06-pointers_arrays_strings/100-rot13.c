#include "main.h"
/**
 * rot13 - encode string
 * @s: input parameter
 * Description: encodes a string using rot13
 * Return: return s
 */
char *rot13(char *s)
{
	char real[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char rot[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;

	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; real[j] != '\0'; j++)
		{
			if (s[i] == real[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
