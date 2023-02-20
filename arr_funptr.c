#include<stdio.h>

float add(int a, int b) {
    return a + b;
}

float subtract(int a, int b) {
    return a - b;
}

float multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return a / (b * 1.0);
}

int main() 
{
    float a, b;
    float (*operation[4])(int, int);

    operation[0] = add;
    operation[1] = subtract;
    operation[2] = multiply;
    operation[3] = divide;
    
    printf("Enter two values ");
    scanf("%f %f", &a, &b);
    
    float result = (*operation[0])(a, b);
    printf("Addition (a+b) = %.1f\n", result);
    
    result = (*operation[1])(a, b);
    printf("Subtraction (a-b) = %.1f\n", result);
    
    result = (*operation[2])(a, b);
    printf("Multiplication (a*b) = %.1f\n", result);
    
    result = (*operation[3])(a, b);
    printf("Division (a/b) = %.1f\n", result);
    
    return 0;
}

/*
output:
------
Enter two values 4.23
3.56
Addition (a+b) = 7.0
Subtraction (a-b) = 1.0
Multiplication (a*b) = 12.0
Division (a/b) = 1.3
*/
