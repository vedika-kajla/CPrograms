#include<stdio.h>
int main(){
    int cost_price, selling_price;
    printf("Enter the cost price and selling price of the item:\n");
    scanf("%d %d", &cost_price, &selling_price);

    if(cost_price < selling_price){
        printf("the seller has made profit of %d", selling_price - cost_price);
    }
    else{
        printf("the seller has made a loss of %d", cost_price - selling_price);
    }
    return 0;
}