#include "main.h"
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

	if (s[0] == '-') { 

		j = -1; 

		i++; 
	} 
	for (; s[i] != '\0'; ++i)
	{
		r = r * 10 + s[i] - '0'; 
	}
	return (j * r); 
}
