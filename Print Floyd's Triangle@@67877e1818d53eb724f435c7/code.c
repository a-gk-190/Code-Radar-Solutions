// Your code here...
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",(n*j)-(n-i));
    }
    printf("\n");
}


    return 0;
}