
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int increment(int num);
extern int negate(int num);

int main(void)
{
	int i;
	int arr[] = {10, 0, -10};

	for(i=0;i<(sizeof(arr)/sizeof(int));i++)
		printf("%d\t", increment(arr[i]));
	printf("\n");

	for(i=0;i<(sizeof(arr)/sizeof(int));i++)
		printf("%d\t", negate(arr[i]));
	printf("\n");

	system("PAUSE");

	return EXIT_SUCCESS;
}
