#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num;
    scanf("%d",&num);
    if(num >! 0){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}