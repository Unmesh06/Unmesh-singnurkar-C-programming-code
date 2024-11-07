//Hotel Menu Card
#include<stdio.h>
int main()
{
    int item, quantity, total;
    printf("Menu Card:\n");
    printf("Pav Bhaji - Rs100\n");
    printf("Misal Pav - Rs120\n");
    printf("Biryani - Rs180\n");

    printf("Enter the item that you want:");
    scanf("%d",&item);

    printf ("Enter quantity you want to have\n");
    scanf("%d",&quantity);

    switch(item){
        case 1:
             total = 100*quantity;
             printf("You have ordered %d Pav Bhaji(s), Total=%d",quantity,total);
             break;
        case 2:
             total = 120*quantity;
             printf("You have ordered %d Misal Pav(s), Total=%d",quantity,total);
             break;
        case 3:
             total= 180*quantity;
             printf("You have ordered %d Biryani(s), Total=%d",quantity,total);
             break;   
        default:
            printf("Invalid item");
    }          

    return 0;

}