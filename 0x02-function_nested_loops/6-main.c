#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int q;

	q = _abs(-1);
	printf("%d\n", q);
	q = _abs(0);
	printf("%d\n", q);
	q = _abs(1);
	printf("%d\n", q);
	q = _abs(-97);
	printf("%d\n", q);
	return (0);
}
