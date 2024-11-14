#include<stdio.h>
int main(){
     int l, b, r;
     int area_rectangle, perimeter_rectangle;
     float area_circle, circumference_circle;

     printf("Enter the length of the rectangle");
     scanf("%d", &l);
     printf("Enter the breadth of the rectangle");
     scanf("%d", &b5);

     printf("enter the radius of a circle");
     scanf("%d", &r);

     area_rectangle = l*b;
     area_circle = 3.14*r*r;
     perimeter_rectangle = 2*(l+b);
     circumference_circle = 2*3.14*r; 

     printf("area of the rectangle = %d\n area of the circle = %f \n perimeter of the rectangle= %d\n circumference of the circle =%f\n"
             ,area_rectangle ,area_circle ,perimeter_rectangle ,circumference_circle);
     
     return 0;

}