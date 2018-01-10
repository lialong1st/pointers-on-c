
#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0

int main(void)
{
	int ch, line, begin;

	begin = TRUE;
	line = 0;

	while((ch = getchar()) != EOF)
	{
		if (begin == TRUE)
		{
			begin = FALSE;
			line++;
			printf("%d ", line);
		}

		putchar(ch);
		if (ch == '\n')
			begin = TRUE;
	}

	return EXIT_SUCCESS;
}