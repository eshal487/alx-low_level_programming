#include <unistd.h>

/** 
 * _putchar - erite the character c
 * @C: the charater to print
 * Return: on succes 1
 * on error 1 is return ed
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
