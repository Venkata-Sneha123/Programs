#include <stdio.h>

int main()
{
	int arr[3][3] = {{2, 4, 6}, 
			  {0, 1, 0}, 
			  {3, 5, 7}};
	int i, j;
	
	// the below statement is wrong because
	// arr will return the address of a first 1-D array.
	// int *ptr = arr;
	// int *ptr = &arr[0]; is correct or we can write &arr[1], &arr[2].
	
	printf("Addresses : \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%p[%d%d] ", (*(arr + i) + j), i, j);	
		}
		printf("\n");
	}

	printf("Values : \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d[%d%d] ", *(*(arr + i) + j), i, j);	
		}
		printf("\n");
	}
	
	return 0;
}

/*
output:
------
Addresses :
0x7ffc4134b5f0[00] 0x7ffc4134b5f4[01] 0x7ffc4134b5f8[02]
0x7ffc4134b5fc[10] 0x7ffc4134b600[11] 0x7ffc4134b604[12]
0x7ffc4134b608[20] 0x7ffc4134b60c[21] 0x7ffc4134b610[22]
Values :
2[00] 4[01] 6[02]
0[10] 1[11] 0[12]
3[20] 5[21] 7[22]
*/
