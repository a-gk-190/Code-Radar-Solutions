#include <stdio.h>
int main() {
    // printf("Hello Geek!");
    int n;
    scanf("%d",&n);
    // if(n & 1){
    //    printf("Set");
    // }else{
    //     printf("Not Set");
    // }
    int digit = n%2;
    if(digit==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    
    return 0;
}