#include <stdio.h>

int main()
{
    const int a = 10;
    const int * ptr;    // Note that it is not necessary to initialise the pointer here at the time of declaration
    ptr = &a;    
    
    // *ptr = 50;    // This is not allowed because 'a' is const
    printf("%d\n", *ptr);
    
    int b = 100;
    ptr = &b;
    printf("%d\n", *ptr);
    
    return 0;
}

/*
output:
------
10
100
*/
