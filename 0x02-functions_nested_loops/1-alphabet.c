#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet(void) - print alphabet lowercase
 * Description: using a function
 * Return: Always (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
