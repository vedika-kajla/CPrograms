#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c, s; 
    float area;
    printf("Enter the sides of the triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    s = (a+b+c)/2;
    area =  sqrt((s) * (s-a) *(s-b) * (s-c));
    
    printf("The area of the triangle is %f", area);
    return 0;
}