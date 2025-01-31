#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%c",&ch);
    int Check = ch;
    if(Check >64 && Check <91){
        printf("Uppercase");
    }else if(Check > 96 && Check <123){
        printf("Lowercase");
    }
    return 0;
}