#include <stdio.h>
#include<string.h>
int main(){
    char item[50] ="";
    float price = 0.0f;
    int quantity = 0;
    // Variable to store the currency symbol used for displaying prices in the shopping cart.
    // Currently set to the US Dollar ('$').
    char currecncy = '$';
    float total =0.0f;

    printf("what item you would like to buy: ");    
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0'; // Remove the newline character]

    printf("what is the price of the each item:");
    scanf("%f",&price);

    printf("how many would you like:");
    scanf("%d", &quantity);
    printf("\nyou have brought %d %s \n", quantity, item);

    total = price * quantity;
    printf("your total is %c%.2f",currecncy , total);


}