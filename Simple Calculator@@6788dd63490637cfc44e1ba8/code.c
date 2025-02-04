#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    char ch;
    scanf("%c",&ch);
    if(ch=='+'){
        printf("%d",num1+num2);
    }else if(ch=='-'){
        printf("%d",num1-num2);
    }else if(ch=='*' &&num2==0){
        printf("%d",num1*num2);
    }else if(ch=='/' && num2==0){
        printf("%d",num1/num2);
    }else {
        printf("error");
    }
    return 0;
}