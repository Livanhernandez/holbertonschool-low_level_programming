#include "main.h"
/**
 *
 *
 */
int main()
{
	FILE *fp1, *fp2;
	char c;

	fp1 = fopen("file_from", "r");
	if (fp1 == NULL)
	{
		printf("Usage: cp file_from file_to\n");
			exit(97);
	}
	fp2 = fopen("file_to", "w");
	if (fp2 == NULL)
	{
		printf("Error: Can't read from file\n");
			exit(98);
	}
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return (0);
}
