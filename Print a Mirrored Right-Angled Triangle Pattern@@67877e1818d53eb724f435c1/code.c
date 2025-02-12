// Your code here...
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1; i<n+1;i++){

   for(int j=1; j<=i;j++){
    for(int k=1;k<=j;k++){
        printf(" ");
    }
    printf("*");
   }
    

    printf("\n");
}

    return 0;
}