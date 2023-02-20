#include<stdio.h>

int main()
{
	int a=5;
	int *p1=&a;
	int **p2=&p1;
	int ***p3=&p2;

	printf("%d %d %d\n",*p1,**p2,***p3);
	printf("size of ptr:%ld %ld\n",sizeof(p1),sizeof(p2));
	
	return 0;
}

/*
output:
------
5 5 5
size of ptr:8 8
*/
