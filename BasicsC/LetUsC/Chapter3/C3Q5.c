#include <stdio.h>
int main(){
 int number, a, b, c, d, e, rev_num;
  printf("Enter the five digit number");
  scanf("%d", &number);

   a = number/10000;
   b = (number%10000)/1000;
   c = (number%10000)%1000/100;
   d = (number%10000)%1000%100/10;
   e = (number%10000)%1000%100%10/1;
    
     rev_num = e*10000+d*1000+c*100+b*10+a;

     printf("The reverse of the %d is %d\n", number, rev_num);

   if (number==rev_num)
   printf("the original and reversed numbers are equal");
   else
   printf("the original and reversed number are not equal");
   return 0;
   
}
