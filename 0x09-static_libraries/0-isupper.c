#include "main.h"

/**
 * _isupper - -check for uppercase letter
 * @c: the function parameter
 * Return: 1 if its uppercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
