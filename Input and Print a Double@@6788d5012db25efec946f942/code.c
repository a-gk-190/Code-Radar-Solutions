#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    double num;
    scanf("%lf",&num);
printf("You entered: %.4lf",num);
    return 0;
}