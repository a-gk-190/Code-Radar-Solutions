#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num;
    scanf("%d",&num);
    if(num < 0){
        printf("Negative");
    }else if(num == 0){
        printf("Zero");
    }else{
        printf("Positive");
    }
    return 0;
}