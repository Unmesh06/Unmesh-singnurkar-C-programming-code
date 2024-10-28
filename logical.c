//Progrram for Logical operator for greater or lesser
#include<stdio.h>
int main()
{
    int a=10, b=20;
    {
        if (a > 0 && b > 0) {
        printf("Both values are greater than 0\n");
        }
        else {
        printf("Both values are less than 0\n");
        }
    }
    {
        if (a > 0 || b > 0) {
        printf("Any one of the given value is greater than 0\n");
        }
        else {
        printf("Both values are less than 0\n");
        }
    }
    {
        if (!(a > 0 && b > 0)) 
        {
        printf("Both values are greater than 0\n");
        }
        else {
        printf("Both values are less than 0\n");
        }
    }
    return 0;    
}