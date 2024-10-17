#include "main.h"

/**
 * _islower - check for if the letter is in lowercase
 * @c: the character ehich is checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

