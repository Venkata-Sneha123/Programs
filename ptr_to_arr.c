#include <stdio.h>

int main()
{
	int arr[5] = {3, 5, 7, 9, 11}, i;

	int *ptr = arr; 

	for(i = 0; i < 5; i++)
	{
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	return 0;
}

/*
output:
------
3 5 7 9 11
*/
