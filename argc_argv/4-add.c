#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);

		if (sum == 199)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
