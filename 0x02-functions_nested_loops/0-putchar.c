#include <unistd.h>
#include "main.h"

/**
 * main - Entry function
 * Return: 0.
 */
int main(void)
{
	char word[7] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
