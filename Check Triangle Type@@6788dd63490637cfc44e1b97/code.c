#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int side1,side2,side3;
    scanf("%d %d %d",&side1,&side2,&side3);
   
     if(side1==side2 && side2==side3){
        printf("Equilateral");
    }else if(side1!=side2 && side2!=side3){
        printf("Scalene");
    }else{
        printf("Isosceles");
    }
    return 0;
}