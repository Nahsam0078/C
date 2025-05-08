#include <stdio.h>
int main(){
    char item[50];
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    printf("what is the price for each item?\n");
    scanf("%f",&price);
    printf("how many would you like to buy?\n");
    scanf("%d", &quantity);

    return 0;


}