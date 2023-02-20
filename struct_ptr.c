#include<stdio.h>

// create a structure Coordinate
struct Coordinate {
    // declare structure members
    int x,y;
};

int main() 
{
    struct Coordinate first_point;
    // declaring structure pointer
    struct Coordinate *cp;
    cp = &first_point;
    
    (*cp).x = 5;
    (*cp).y = 10;
    
    printf("First coordinate (x, y) = (%d, %d)\n", (*cp).x, (*cp).y);
    return 0;
}

/*
output:
------
First coordinate (x, y) = (5, 10)
*/
