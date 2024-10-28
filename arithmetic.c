#include <stdio.h>
int main()
{
    int a = 100, b = 50,add,sub,multi,div,rem;                    // Assign Value to variables  
    add=a+b;                    // Addition of two numbers
    printf("a+b = %d\n",add); 
    sub=a-b;                    // Subtraction of two numbers                  
    printf("a-b = %d\n",sub);         
    multi=a*b;                  // Multiplication of two numbers
    printf("a*b = %d\n",multi);         
    div=a/b;                    // Division of two numbers and will give quotient
    printf("a/b = %d\n",div);         
    rem=a%b;                    // It will divide and give the remainder of a & b
    printf("a%%b = %d\n",rem);        
    return 0;
}