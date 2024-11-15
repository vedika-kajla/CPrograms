#include<stdio.h>
int main(){
    int number, a, b, c, d, e;
    printf("Enter the five digit number:");
    scanf("%d", &number);

    a = number/10000;
    b = (number%10000)/1000;
    c = (number%10000)%1000/100;
    d = (number%10000)%1000%100/10;
    e = (number%10000)%1000%100%10/1;

    printf(" the sum of the five digit number is %d", a+b+c+d+e);
    return 0;
}