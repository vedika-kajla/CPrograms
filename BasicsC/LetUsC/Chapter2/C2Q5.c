#include<stdio.h>
#include<math.h>
int main(){
    float l1, l2, g1, g2, d;
    printf("Enter the latitude (a,b) and longitude (x,y) of two places on earth in degree\n");
    scanf("%f %f %f %f", &l1, &l2, &g1, &g2);

    d = 3963*(1/cos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(g2-g1)));
    printf("Distance between the two places in nautical miles would be %0.2f", d);
    return 0;
}