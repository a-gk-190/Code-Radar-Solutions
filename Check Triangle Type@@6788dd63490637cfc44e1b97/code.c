#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int side1,side2,side3;
    scanf("%d %d %d",&side1,&side2,&side3);
    if((side1 == side2 )!=side3 || (side2==side3)!=side1 || (side1==side3)!=side2){
        printf("Isosceles");
    }else if(side1==side2==side3){
        printf("Equilateral");
    }else{
        printf("Scalene");
    }
    return 0;
}