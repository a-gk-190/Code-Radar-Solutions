#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int average = (a+b+c)/3;
    printf("Average: %d",average);
    return 0;
}