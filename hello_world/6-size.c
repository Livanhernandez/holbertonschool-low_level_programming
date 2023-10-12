#include<stdio.h>
/**
 * main - Print size of folders
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charSize;
	int intSize;
	long int lngintSize;
	long long int lolointSize;
	float floatSize;

	printf("Size of a char: %zu bytes(s)\n", sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lngintSize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lolointSize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatSize));

	return (0);
}
