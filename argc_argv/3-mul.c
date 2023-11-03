#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv:argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, j, m;


	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		m = i * j;
		printf("%d\n", m);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
