#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1==num2){
        printf("Equal");
    }else if(num1>num2){
        printf("First");
    }else{
        printf("Second");
    }
    return 0;
}