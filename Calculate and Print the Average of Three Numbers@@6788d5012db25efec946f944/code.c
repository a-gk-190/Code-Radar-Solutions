#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float average = (a+b+c)/3;
    printf("Average: %0.2f",average);
    return 0;
}