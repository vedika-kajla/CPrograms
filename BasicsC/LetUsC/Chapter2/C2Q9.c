#include<stdio.h>
int main(){
    int N, a, b, c, d, e, f;
    printf("Enter the amount of rupees");
    scanf("%d", &N);

    a = N/100;
    b = (N%100)/50;
    c = (N%100)%50/10;
    d = (N%100)%50%10/5;
    e = (N%100)%50%10%5/2;
    f = (N%100)%50%10%5%2/1;

    printf("the smallest no. of notes that will combine to give Rs.%d is %d", N, a+b+c+d+e+f);
    return 0;
}