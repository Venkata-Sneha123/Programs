#include<stdio.h>  
void main ()  
{  
	int i = 100;   
	int *p = &i;  
	int *temp;  
	temp = p;   
	p = p + 3;  
	printf("Pointer Subtraction: %p - %p = %ld\n",p, temp, p-temp);  
}  


/*
output:
-------
Pointer Subtraction: 0x7fff15c75c70 - 0x7fff15c75c64 = 3
*/
