#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() 
{
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    char Operator;
    scanf("%c",&Operator);
    if(Operator == '+'){
        printf("%d",num1+num2);
    }else if(Operator == "-"){
        printf("%d",num1 - num2);
    }else if(Operator == "*"){
        printf("%d",num1*num2);
    }else if(Operator == "/"){
        printf("%d",num1/num2);
    }else{
        printf("Error");
    }
    return 0;
}