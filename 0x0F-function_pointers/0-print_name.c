#include <stdio.h>
#include "main.h"
/**
 * print_name - prints a name
 * @name: input parameter
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
