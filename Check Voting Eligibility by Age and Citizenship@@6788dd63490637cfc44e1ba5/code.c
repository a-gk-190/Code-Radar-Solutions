#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1>=18 &&num2==1){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}