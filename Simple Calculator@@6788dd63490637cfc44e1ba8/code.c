#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    char Operator;
    scanf("%c",&Operator);
    if(Operator == '+'){
        printf(num1+num2);
    }else if(Operator == "-"){
        printf(num1 - num2);
    }else if(Operator == "*"){
        printf(num1*num2);
    }else{
        printf(num1/num2);
    }
    return 0;
}