#include "main.h"

/**
 * main - Entry function
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
