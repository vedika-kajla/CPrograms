#include<stdio.h>
#include<math.h>
int main(){
    float angle, s, c, t, co, se, csec;
    printf("Enter the angle in degree");
    scanf("%f", &angle);
    s = sin(angle); 
    c = cos(angle); 
    t = tan(angle); 
    co = 1/t;
    se = 1/c;
    csec = 1/s;

    printf(" the trigonometric ratios are as follows:\n %f\n %f\n %f\n %f\n %f\n %f", s, c, t, co, se, csec);
    return 0;
}