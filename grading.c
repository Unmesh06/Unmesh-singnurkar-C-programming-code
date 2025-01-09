#include <stdio.h>
int main() 
{
    int n;
    printf("Enter your percentage:");
    scanf("%d",&n);
    
    if(n<40){
        printf("Failed");
    }
    else if((n>=40)&&(n<60)){
        printf("Second Class");
    }
    else if((n>=60)&&(n<70)){
        printf("First Class");
    }
    else if((n>=70)&&(n<=100)){
    printf("Distintion");
    }
    return 0;
}
