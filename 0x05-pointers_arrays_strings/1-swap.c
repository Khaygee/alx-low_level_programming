#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * Auth: Cynthia K
 * @a: Integer a
 *  @b: Integer b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
