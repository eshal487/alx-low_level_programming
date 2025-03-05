#include "variadic_functions.h"

/**
 *sum_them_all - sum all parameter
 *@n: number of arguments
 *Return :  sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list li;

	if (n == 0)
		return (0);
	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}
	va_end(li);
	return (sum);
}
