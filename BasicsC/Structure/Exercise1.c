#include<stdio.h>
struct Person {
    float age, weight;
};
struct Box {
    float h, w, d;
};

int main() {
    struct Person *PTR, per;
    int x = 4;
    PTR = &per;

    printf("Enter age: ");
    scanf("%f", &PTR ->age);

    printf("Enter weight: ");
    scanf("%f", &PTR ->weight);

    printf("Age: %.2f and Weight: %.2f\n", PTR->age, PTR->weight);
    printf("Size of x is: %ld", sizeof(x));

    return 0;
}
