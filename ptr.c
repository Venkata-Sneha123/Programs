#include <stdio.h>
int main()
{
   int a=10;    //variable declaration
   int *p;      //pointer variable declaration
   p=&a;        //store address of variable a in pointer p
   printf("Address stored in a variable p is:%p\n",p);  //accessing the address
   printf("Value stored in a variable p is:%d\n",*p);   //accessing the value
   return 0;
}


/*
output:
-------
Address stored in a variable p is:0x7ffcf9ce94ec
Value stored in a variable p is:10
*/
