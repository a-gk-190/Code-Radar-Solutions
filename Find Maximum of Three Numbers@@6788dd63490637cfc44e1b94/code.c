#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    // if(num1 > num2 && num1 > num3){
    //     printf("%d",num1);
    // }else if(num2 > num3 && num2 > num1){
    //     printf("%d",num2);
    // }else{
    //     printf("%d",num3);
    // }
num1 > num2 &&num3 ? printf("%d",num1) : ;
num2 > num1 &&num3 ? printf("%d",num1) : ;
num3 > num2 &&num1 ? printf("%d",num1) : ;


    return 0;
}