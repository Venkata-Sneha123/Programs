#include <stdio.h>

int var = 1; /* Declare and initialize an int variable */

int *ptr; /* Declare a pointer to int */


int main( void )
{

ptr = &var;/* Initialize ptr to point to var */

/* Access var directly and indirectly */
printf("\nDirect access, var = %d", var);
printf("\nIndirect access, var = %d", *ptr);

/* Display the address of var two ways */
printf("\n\nThe address of var = %p", &var);
printf("\nThe address of var = %p\n", ptr);

/*change the content of var through the pointer*/
*ptr=48;
printf("\nIndirect access, var = %d\n", *ptr);

return 0;
}


/*
output:
------

Direct access, var = 1
Indirect access, var = 1

The address of var = 0x561ec74a8010
The address of var = 0x561ec74a8010

Indirect access, var = 48
*/
