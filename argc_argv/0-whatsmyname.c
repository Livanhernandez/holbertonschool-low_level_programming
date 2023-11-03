#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts arguments
 * @argv: s array of character pointers listing all the arguments
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
