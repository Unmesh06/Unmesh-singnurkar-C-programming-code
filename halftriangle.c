//Program for Rightangle triangle
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");//Enter how many row triangle do you want
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
     {
        for (int j=1;j<=i;j++) 
        {
            printf("*");
        }
        printf("\n");
     }
     
    return 0;
}