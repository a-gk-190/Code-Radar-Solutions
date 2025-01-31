#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num;
    scanf("%d",&num);
    if(num % 400 == 0 ){
        printf("Leap Year");
    }else if(num % 4 == 0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}