#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1;
    scanf("%d",&num1);
    if(num1 !>0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}