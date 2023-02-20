/*
#include <stdio.h>

int main()  
{
    int *ptr;

    {
        int temp = 10;
        ptr = &temp; // acting as normal pointer
    }

    printf("%d %d", *ptr, temp);
    printf("%d\n", *ptr);
    return 0;
}
*/

/*
output:
------
ptr2.c: In function ‘main’:
ptr2.c:17:26: error: ‘temp’ undeclared (first use in this function)
   17 |    printf("%d %d", *ptr, temp);
      |                          ^~~~
ptr2.c:17:26: note: each undeclared identifier is reported only once for each function it appears in


if you comment that printf statement, it will print garbage value, but it is printing 10 
*/


#include <stdio.h>

int main()
{
    int *ptr;

    {
        static int temp = 10;
        ptr = &temp; // acting as normal pointer
    }

//    printf("%d %d", *ptr, temp);
    printf("%d\n", *ptr);
    return 0;
}


/*
output:
-------
10
*/
