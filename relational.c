//Program for all Relational Operators
#include<stdio.h>
int main()
{
    int a=20,b=10;
    {
        if(a>b){                            // checks if a greater than b
            printf("a greater than b\n");
        }}
    {
        if(a<b){                            // checks if a smaller than b
            printf("a smaller than b\n");
        }}
    {
        if(a>=b){                           // checks if a greater or equal to b
            printf("a greater than or equal to b\n");
        }} 
    {
        if(a<=b){                           // checks if a smaller or equal to b
            printf("a less than or equal to b\n");
        }} 
    {
        if(a==b){                           // checks if a equal to b                       
            printf("a equal to b");
        }}
    {
        if(a!=b){                           // checks if a is not equal to b
            printf("a not equal to b");
        }}           
    return 0;
}