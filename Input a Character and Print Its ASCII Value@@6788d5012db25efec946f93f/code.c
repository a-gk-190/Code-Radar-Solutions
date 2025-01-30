#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%c",&ch);
    int ch = (int)ch;
printf("ASCII Value: %d",ch);

    return 0;
}