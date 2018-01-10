
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN		1000

int main(void)
{
	int len = 0;
	char table[MAX_LEN] = {0};
	char temp[MAX_LEN] = {0};

	while (gets(temp) != NULL)
	{
		if (strlen(temp) > len)
		{
			len = strlen(temp);
			strcpy(table, temp);
		}
	}

	printf("%s\n", table);

	system("pause");

	return EXIT_SUCCESS;
}