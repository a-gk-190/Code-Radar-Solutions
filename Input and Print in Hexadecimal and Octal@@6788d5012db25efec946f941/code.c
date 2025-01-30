#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int num;
    scanf("%d",&num);
    printf("Hexadecimal: %x\n",num);
    printf("Octal: %o",num);
    return 0;
}