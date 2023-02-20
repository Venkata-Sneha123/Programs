#include<stdio.h>
// Callback Function which has no argument and no return value
void callback_fn( void )
{
    printf("In callback function\n");
}
void test_loop( void (*fn)(void) )
{
    for( int i = 0; i < 6; i++ )
    {
        if(i == 5)
        {
            // callback execution
            (*fn) ();
        }
        printf("i = %d\n", i);
    }
}
  
int main()
{
    // Registering the callback
    void (*fn_ptr)( void ) = &callback_fn;
      
    // calling the function with the function pointer
    test_loop(fn_ptr);
  
   return 0;
}

/*
output:
------
i = 0
i = 1
i = 2
i = 3
i = 4
In callback function
i = 5
*/

