#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num;
    scanf("%d",&num);
    if(num > 0){
        printf("Positive");
    }else if(num == 0){
        printf("Zero");
    }else{
        printf("Negative");
    }
    return 0;
}