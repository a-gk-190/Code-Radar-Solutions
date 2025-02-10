#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num,num1;
    scanf("%d %d",&num,&num1);
    printf("%d",num>>&num1);
    return 0;
}