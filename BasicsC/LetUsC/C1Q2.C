#include<stdio.h>
int main(){
float distance;
int meters, feet, inches, centimeters;

printf("Enter the distance between the two cities in kilometer");
scanf("%f", &distance);

//converting km into meters, feet, inches and centimeters
meters = distance*1000;
feet = distance*3280;
inches = distance*10.079;
centimeters = distance*100000;

printf("distance measured between the two cities in meters would be %d\n in feet would be %d\n in inches would be %d\n in centimeters would be %d", meters, feet, inches, centimeters);

         return 0;
}