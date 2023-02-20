/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *p=(int*)malloc(sizeof(int));
        *p=12;
        free(p);
        printf("%d\n",*p);
        return 0;
}
*/
/*
output:
------
1583094202
*/


//solution is:
#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *p=(int*)malloc(sizeof(int));
        *p=12;
        free(p);
        printf("%d\n",*p);
        p=NULL;
	printf("%d\n",*p);
        return 0;
}

/*
output: you always get runtime error
-------
1499012585
Segmentation fault (core dumped)
*/
