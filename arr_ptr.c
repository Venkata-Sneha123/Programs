#include <stdio.h>

int main() 
{
	int arr[5] = {3, 5, 7, 9, 11};

	printf("arr : %p, Value : %d\n", arr, *arr);
	printf("&arr : %p, Value : %d\n", &arr, *(arr));
	printf("&arr[0] : %p, Value : %d\n", &arr[0], *( &arr[0]));

	return 0;
}

/*
output:
-------
arr : 0x7ffeddff7bf0, Value : 3
&arr : 0x7ffeddff7bf0, Value : 3
&arr[0] : 0x7ffeddff7bf0, Value : 3
*/
