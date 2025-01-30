#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%c",&ch);
    int chr = (int)ch;
printf("ASCII Value: %d",chr);

    return 0;
}