#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char abc;

	for (num = 0; num <= 10; num++)
		putchar ('0' + num);
			
	for (abc = 'a'; abc <= 'f'; abc++)
		putchar (abc);

	putchar ('\n');

	return (0);
}
