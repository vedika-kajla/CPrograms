/*
Programmer: Vedika Kajla
Programm: Introduction to C
*/

#include <stdio.h>
int f(int x) {
    return x*x + 2;
}
int y;
float o;
float g( int x, float y) {
    return x + y + 3;
}
int main() {
   // int y;
    y = f(2);
    o = g(2, 3.6);
    printf("Value of y is %d, o is %f", y, o);
    printf("Hello World\n");
    getchar(); 
    return 0;
}