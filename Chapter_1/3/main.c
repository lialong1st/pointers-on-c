
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;
	char checksum = -1;

	while((ch = getchar()) != EOF)
	{
		checksum += ch;
		if (ch == '\n')
			printf("%d\n", checksum);
	}

	return EXIT_SUCCESS;
}