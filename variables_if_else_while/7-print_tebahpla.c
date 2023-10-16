#include <stdio.h>

/**
 * main - Return option
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char cba;

	for (cba = 'z'; cba >= 'a'; cba--)
		putchar (cba);
	putchar ('\n');

	return (0);
}
