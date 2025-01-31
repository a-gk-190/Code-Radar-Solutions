#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d", num1^num2);
    return 0;
}