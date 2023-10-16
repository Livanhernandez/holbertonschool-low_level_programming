#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc = 'a';
	int i = 0;

	while (i < 26)
{
	putchar (abc);
	abc++;
	i++;
}
	i = 0;
	abc = 'A';

	while (i < 26)
{
	putchar (abc);
	abc++;
	i++;
}
	putchar ('\n');

	return (0);
}
