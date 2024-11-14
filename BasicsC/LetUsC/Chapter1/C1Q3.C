#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5,total_marks;
    float percentage_marks;
    printf("Enter the marks obtained by student in s1 out of 100 marks\n");
    scanf("%d", &s1);
    printf("Enter the marks obtained by student in s2 out of 100 marks\n");
    scanf(" %d", &s2);
    printf("Enter the marks obtained by student in s3 out of 100 marks\n");
    scanf(" %d", &s3);
    printf("Enter the marks obtained by student in s4 out of 100 marks\n");
    scanf(" %d", &s4);
    printf("Enter the marks obtained by student in s5 out of 100 marks\n");
    scanf(" %d", &s5);
     
     total_marks = (s1+s2+s3+s4+s5);
     percentage_marks = (total_marks*100)/500;
     printf("Total marks obtained out of 500 is %d and percentage marks is %f", total_marks, percentage_marks);

     return 0;
}