#include<stdio.h>
int main(){
   int salary, allowance, rent;
   printf("Enter Ramesh salary");
   scanf("%d", &salary);

   allowance=40*salary/100;
   rent=20*salary/100;

   printf("Ramesh allowance is %d and his rent is %d", allowance, rent);
   return 0;
}