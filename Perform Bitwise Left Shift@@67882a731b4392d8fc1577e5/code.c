#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,number;
    scanf("%d",&num1);
    scanf("%d",number);
    printf("%d", num1<<number);

    
    return 0;
}