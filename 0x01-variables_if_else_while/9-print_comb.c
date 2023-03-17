#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry function
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
