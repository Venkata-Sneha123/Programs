#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int * const ptr = &a;
   // ptr = &a;    // This is not allowed (error: assignment of read-only variable )
   //   ptr = &b;    // Cannot point to another variable number
    printf("a=%d\n", *ptr);

    *ptr=50;
    printf("a=%d\n", *ptr);
    return 0;
}

/*
output:
------
a=10
a=50
*/
