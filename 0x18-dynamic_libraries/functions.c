#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - prints 1 or 0 depending on the input
 * @c : parameter
 * Description: print lowercase alphabets
 * Return: Always 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Return 1 for correct input
 * @c: input
 * Description: Checks for alphabetic charcters
 * Return: Always returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/**
 * _abs - absolute
 * @n: Integer
 * Description: Returns absolute number of input
 * Return: Always returns 0
 */
int _abs(int n)
{
	return (abs(n));
}

/**
 * _isdigit - determine if digit
 * @n: value to determine
 * Return: Returns zero or one
 */
int _isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _isupper - checks if uppercase
 * @ch: character to check
 * Return: returns a 1 or 0
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen - returns lenght of string
 * @s: parameter
 * Description: uses pointers
 * Return: Always return 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _puts - put string
 * @str: parameter
 * Description: prints a string
 * Return: Always Returns 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcpy - main function to copy
 * @dest: destination to copy
 * @src: src
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int p;
	p = 0;

	while (src[p] != '\0')
	{
		p++;
	}
	for (i = 0; i <= p; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * Description: appends the src string to the dest string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;
	n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; src[i] != '\0'; i++, n++)
	{
		dest[n] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: number of bytes to be used
 * Description: use at most n bytes from src
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	j = 0;

	while (dest[j] != '\0')
	{
		++j;
	}
	for (i = 0; src[i] != '\0' && i < n; ++i, ++j)
	{
		dest[j] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * _strncpy - string copy
 * @dest: first parameter
 * @src: second parameter
 * @n: no of bytes
 * Description: the function copies a string
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strcmp - compare strings
 * @s1: first parameter
 * @s2: second parameter
 * Description: the function compares two strings
 * Return: character count
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _memset - fill memory
 * @s: input parameter 1
 * @b: input parameter 2
 * @n: input parameter 3
 * Description: fills memory with a constant byte
 * Return: returns pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _memcpy - copies memory area
 * @dest: input parameter 1
 * @src: input parameter 2
 * @n: input parameter 3
 * Description: copies n bytes from memory area src to memory area dest
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strstr - locate string
 * @haystack: input parameter
 * @needle: input parameter
 * Description: locates a substring
 * Return: returns a pointer to the substring, else returns NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack)
	{
		i = haystack;
		j = needle;
		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
		{
			return (i);
		}
		else
		{
			haystack = i + 1;
		}
	}
	return (NULL);
}

/**
 * _strpbrk - search a string
 * @s: input parameter
 * @accept: accepted parameter
 * Description: searches a string for any of a set of bytes
 * Return: returns s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len, t = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	len = i;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= len)
				{
					len = j;
					t = 1;
				}
			}
		}
	}
	if (t == 1)
	{
		return (&s[len]);
	}
	else
	{
		return (NULL);
	}
	return (0);
}

/**
 * _strspn - gets length
 * @s: input parameter
 * @accept: parameter
 * Description: gets the length of a prefix substring
 * Return: num of bytes in s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}

/**
 * _atoi - converts strings to int
 * @s: first parameter
 * Description: takes all types of char
 * Return: 0 for success
 */
int _atoi(char *s)
{
	int r, j, i;
	r = 0;
	j = 1;
	i = 0;

	if (s[0] == '-')
	{

		j = -1;

		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		r = r * 10 + s[i] - '0';
	}
	return (j * r);
}
