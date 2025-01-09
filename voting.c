#include <stdio.h>
int main() 
{
    int n;
    printf("Enter your age:");
    scanf("%d",&n);

    if(n<18){
        printf("You are not eligle to vote");
    }
    else{
        printf("You are eligible to vote");
    }
    return 0;
}    