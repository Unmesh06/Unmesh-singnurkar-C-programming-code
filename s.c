#include <stdio.h>

int main() {
    int item,quantity,total=0,Total;
    char answer;
    
    start:
    // Display the menu
    printf("Menu Card:\n");
    printf("1.Pav Bhaji - Rs100\n");
    printf("2.Misal Pav - Rs120\n");
    printf("3.Biryani   - Rs180\n");

    
    printf("Enter the item that you want:");
    scanf("%d",&item);
    printf ("Enter quantity you want to have\n");
    scanf("%d",&quantity);
   
    switch(item){
        case 1:
             total = 100*quantity;
             printf("You have ordered %d Pav Bhaji(s), Total=%d\n",quantity,total);
             break;
        case 2:
             total = 120*quantity;
             printf("You have ordered %d Misal Pav(s), Total=%d\n",quantity,total);
             break;
        case 3:
             total = 180*quantity;
             printf("You have ordered %d Biryani(s), Total=%d\n",quantity,total);
             break;     
        default:
            printf("Invalid item");
    }
    Total+=total;
    printf("Do you want to order more yes(1) or no(0):");
    scanf("%d",&answer);
    if (answer==1){
     goto start;
    }
    else {
    // Print the total cost
    printf("\nTotal cost: %d\nThank you for visiting :)", Total);
    }
    
    return 0;
}