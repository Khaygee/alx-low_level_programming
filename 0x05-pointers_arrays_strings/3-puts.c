#include "main.h"

/**
 *  _puts - Print a string
 *  Auth: Cyntha K
 *  @str: Set of characters
 *
 *  Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
