#include<stdio.h>
/**
 * main - Print size of folders
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intSize;
	float floatSize;
	long int lngintSize;
	long long int lolointSize;
	char charSize;

	printf("Size of int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of float: %zu byte(s)\n", sizeof(floatSize));
	printf("Size of long int: %zu byte(s_\n", sizeof(lngintSize));
	printf("Size of long long int: %zu byte(s)\n", sizeof(lolointSize));
	printf("Size of char: %zu byte(s)\n", sizeof(charSize));

	return (0);
}