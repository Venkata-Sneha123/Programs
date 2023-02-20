#include<stdio.h>

int main()
{
	int a=3,b=4;
	int *p1=&a,*p2=&b;
	
	printf("p1+p2=%p\n",p1+p2);
	printf("p1*p2=%p\n",p1*p2);
	printf("p1/p2=%p\n",p1/p2);
	printf("p1%p2=%p\n",p1%%p2);
	printf("p1&p2=%p\n",p1&p2);
	printf("p1^p2=%p\n",p1^p2);
	printf("p1|p2=%p\n",p1|p2);
	printf("~p1=%p\n",~p1);

	return 0;
}

/*
output:
------
ptr_arithmetic5.c: In function ‘main’:
ptr_arithmetic5.c:8:31: error: invalid operands to binary + (have ‘int *’ and ‘int *’)
    8 |         printf("p1+p2=%p\n",p1+p2);
      |                               ^
ptr_arithmetic5.c:9:31: error: invalid operands to binary * (have ‘int *’ and ‘int *’)
    9 |         printf("p1*p2=%p\n",p1*p2);
      |                               ^
ptr_arithmetic5.c:10:31: error: invalid operands to binary / (have ‘int *’ and ‘int *’)
   10 |         printf("p1/p2=%p\n",p1/p2);
      |                               ^
ptr_arithmetic5.c:11:32: error: expected expression before ‘%’ token
   11 |         printf("p1%p2=%p\n",p1%%p2);
      |                                ^
ptr_arithmetic5.c:12:31: error: invalid operands to binary & (have ‘int *’ and ‘int *’)
   12 |         printf("p1&p2=%p\n",p1&p2);
      |                               ^
ptr_arithmetic5.c:13:31: error: invalid operands to binary ^ (have ‘int *’ and ‘int *’)
   13 |         printf("p1^p2=%p\n",p1^p2);
      |                               ^
ptr_arithmetic5.c:14:31: error: invalid operands to binary | (have ‘int *’ and ‘int *’)
   14 |         printf("p1|p2=%p\n",p1|p2);
      |                               ^
ptr_arithmetic5.c:15:27: error: wrong type argument to bit-complement
   15 |         printf("~p1=%p\n",~p1);
      |                           ^
*/
