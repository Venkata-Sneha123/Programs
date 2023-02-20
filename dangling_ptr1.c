/*
#include<stdio.h>
#include<stdlib.h>

int *fun()
{
        int a=12;
        return &a;
}


int main()
{
        int *p=fun();
        printf("%d\n",*p);
        return 0;
}
*/


/*
output:
-------
ptr1.c: In function ‘fun’:
ptr1.c:9:16: warning: function returns address of local variable [-Wreturn-local-addr]
    9 |         return &a;
      |                ^~
sneha@sneha-HP-280-G3-MT:~/programs/c$ ./a.out 
Segmentation fault (core dumped)
*/


#include<stdio.h>
#include<stdlib.h>

int *fun()
{
        static int a=12;
        return &a;
}


int main()
{
        int *p=fun();
        printf("%d\n",*p);
        return 0;
}

/*
output:
------
12
*/
