#include <stdio.h>

int main()
{
    const int a = 10;
    int const * const ptr = &a;
    printf("%d\n", *ptr);
    
    //*ptr = 50;    // Cannot change value of constant variable
    //const int b = 100;
    //ptr = &b;    // Cannot reassign pointer to different address
    
    return 0;
}

/*
output:
------
10
*/
