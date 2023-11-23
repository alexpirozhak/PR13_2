#define _CRT_SECURE_NO_WARNINGS

#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main()
{
	FILE* file = fopen("task2.txt", "r");
	
	char str[256];
	int alphas = 0, digits = 0, cntrls = 0, puncts = 0, spaces = 0;
	while (!feof(file))
	{
		fgets(str, 255, file);

		for (int i = 0; i < strlen(str); i++)
		{
			if (isalpha(str[i]))
				alphas++;
			if (isdigit(str[i]))
				digits++;
			if (iscntrl(str[i]))
				cntrls++;
			if (ispunct(str[i]))
				puncts++;
			if (isspace(str[i]))
				spaces++;
		}
	}
	fclose(file);

	printf("alphas = %d\n", alphas);
	printf("digits = %d\n", digits);
	printf("cntrls = %d\n", cntrls);
	printf("puncts = %d\n", puncts);
	printf("spaces = %d\n", spaces);
	
	return 0;
}