#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    scanf("%s",name);
    int age;
    scanf("%d",&age);
     char hobby[100];
    scanf(" %s",hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}