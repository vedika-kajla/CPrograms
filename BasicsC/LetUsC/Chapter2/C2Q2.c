#include<stdio.h>
int main(){
    int a, b, c, d, e, number, rev_number;
    printf("Enter the first digit of the five digit number\n");
    scanf("%d", &a);
    printf("Enter the second digit of the five digit number\n");
    scanf("%d", &b);
    printf("Enter the third digit of the five digit number\n");
    scanf("%d", &c);
    printf("Enter the fourth digit of the five digit number\n");
    scanf("%d", &d);
    printf("Enter the fifth digit of the five digit number\n");
    scanf("%d", &e);
     
     rev_number9 = e*10000+d*1000+c*100+b*10+a;
     number = a*10000+b*1000+c*100+d*10+e;

     printf("The reverse of the number %d is %d", number, rev_number);
     return 0;
}
