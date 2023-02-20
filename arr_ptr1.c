#include <stdio.h>

int main()
{
	int arr[5] = {2, 4, 6, 8, 10}, i;

	for(i = 0; i < 5; i++)
	{
		printf("[index %d] Address : %p, Value : %d\n", i, (arr + i), *(arr + i));
	}

	return 0;
}

/*
output:
------
[index 0] Address : 0x7ffd363014a0, Value : 2
[index 1] Address : 0x7ffd363014a4, Value : 4
[index 2] Address : 0x7ffd363014a8, Value : 6
[index 3] Address : 0x7ffd363014ac, Value : 8
[index 4] Address : 0x7ffd363014b0, Value : 10
*/
