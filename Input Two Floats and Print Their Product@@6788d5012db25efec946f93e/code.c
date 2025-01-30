#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());1
    float num1,num2;
    scanf("%f %f",&num1,&num2);
    printf("Product: %0.2f",num1*num2);
    return 0;
}