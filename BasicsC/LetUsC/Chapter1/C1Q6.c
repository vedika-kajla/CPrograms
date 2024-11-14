#include<stdio.h>
int main(){
    int A1,A2,A3,A4,A5,A6,A7,A8;
    int l = 1189, b = 841;

   A1 = l*b;
   A2 = b*(l/2);
   A3 = (l/2)*(b/2);
   A4 = (b/2)*(l/4);
   A5 = (l/4)*(b/4);
   A6 = (b/4)*(l/8);
   A7 = (l/8)*(b/8);
   A8 = (b/8)*(l/16);

   printf("paper of size with their dimensions are as follows:\nA1:%d mm\nA2:%d mm\nA3:%d mm\nA4:%d mm\nA5:%d mm\nA6:%d mm\nA7:%d mm\nA8:%d mm\n" ,A1 ,A2 ,A3 ,A4 ,A5 ,A6 ,A7 ,A8);
            return 0;
}
