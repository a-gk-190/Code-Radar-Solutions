#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch1[10],ch2[10];
    scanf("%s %s",ch1,ch2);
    printf("You entered: %s and %s" ,ch1,ch2 );
    return 0;
}