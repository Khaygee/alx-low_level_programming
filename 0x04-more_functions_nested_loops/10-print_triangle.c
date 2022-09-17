#include "main.h"

/**
 * print_triangle - Prints a triangle of a determined size.
 * @size: Size of the triangle.
 *
 * Return: There is no return value (void).
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			x = j < (size + 1) - i ? ' ' : '#';
			_putchar(x);
		}
		_putchar('\n');
	}
}
