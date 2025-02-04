#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    
    // int num1,num2;
    // char ch;
    // scanf("%d %d",&num1,&num2);
    // scanf("%c",&ch);
    // if(ch=='+'){
        
    //     printf("%d",num1+num2);
    // }else if(ch=='-'){
    //     printf("%d",num1-num2);
    // }else if(ch=='*' ){
    //     printf("%d",num1*num2);
    // }else if(ch=='/' && num2!=0){
    //     printf("%d",num1/num2);
    // }else {
    //     printf("error");
    // }
    int a,b,div,add,sub,multi;
    char c;
    scanf("%d%d",&a,&b);
    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    scanf("%d%d%d%d",&add,&multi,&sub,&div);
    if(c=='+'){
        printf("%d",add);
    }
    else if(c=='-'){
        printf("%d",,sub);
    }
    else if(c=='*'){
        printf("%d",multi);
    }
    else if(c=='/'){
        printf("%d",div);
    }



    return 0;
}