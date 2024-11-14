#include<stdio.h>
#include<math.h>
int main(){
    int x, y, r, p;

    printf("Enter the cartesian co-ordinates of a point");
    scanf("%d %d", &x, &y);

    r = sqrt(x*x + y*y);
    p = 1/(tan(y/x));

    printf("Polar co-ordinates of the point are (%d,%d)", r, p);
    return 0;
}