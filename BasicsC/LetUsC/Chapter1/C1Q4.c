#include<stdio.h>
int main(){
     float temp_fahrenheit, temp_centrigrade;

     printf("Enter the temperature of the city in fahrenheit degree");
     scanf("%f", &temp_fahrenheit);

     temp_centrigrade= ((temp_fahrenheit-32)*5)/9;

     printf("Temperature of the given city in centrigrade would be %f", temp_centrigrade);
     return 0;

}