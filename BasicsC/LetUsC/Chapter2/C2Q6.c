#include<stdio.h>
#include<math.h>
int main(){
    float t, v, wcf;
    printf("Enter the temperature and wind velocity");
    scanf("%f %f", &t, &v);

    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
    printf("The wind chill temperature would be %0.2f", wcf);
    return 0;
}