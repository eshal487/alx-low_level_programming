#include "main.h"
/**
 * main - entry point
 * Return: 0 success
 */
void print_alphabet_x10(void) {
	int i;
	char ch;
	
	for (i=0;  i < 10; i++) {
		for (ch = 'a'; ch <= 'z'; ch++) {
			_putchar(ch);
		}
		_putchar('\n');
	}
