#include <stdio.h>


int main() 
{
    // printf("%s", welcome());
    char Operator;
    scanf("%c", &Operator);
    int num1,num2;
    scanf("%d  %d",&num1, &num2);
    if("Operator == '+'"){
        printf("%d",num1+num2);
    }else if("Operator == '-'"){
        printf("%d",num1 - num2);
    }else if("Operator == '*'"){
        printf("%d",num1*num2);
    }else if("Operator == '/'"){
        printf("%d",num1/num2);
    }else{
        printf("Error");
    }
    
    return 0;
}