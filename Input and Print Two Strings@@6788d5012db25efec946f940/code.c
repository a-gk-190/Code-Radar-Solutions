#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch1[10],ch2[10];
    scanf("%c %c",&ch1,&ch2);
    printf("You entered: %c" + ch1 + " and " + ch2 );
    return 0;
}