#include<stdio.h>
/**
 * main - Entry point
 * 
 * Description: print 0-9 using putchar while using int variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
       int num = 0;

	while (num <= 9)
	{
	 	/*convert digit to ASCII representaion*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');
 
	return (0);
}	
