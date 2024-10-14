#include <unistd.h>
/**
 * _outchar - write the character c to stdout
 * @c: the character to print 
 * Return: on success 1.
 * on errror, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1,&c 1));
}

