#include<stdio.h>  
int main()
{  
	int number=50;        
	int *p;//pointer to int      
	p=&number;//stores the address of number variable        
	printf("Address of p variable is %p\n",p);        
	p=p-3;        
	printf("After subtracting 3: Address of p variable is %p\n",p); // in our case, p will get incremented by 4 bytes.      
	return 0;  
}    

/*
output:
------
Address of p variable is 0x7fff0189b82c
After subtracting 3: Address of p variable is 0x7fff0189b820
*/
