// Your code here...
#include<stdio.h>
int main(){
int n,count=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        count++;
        printf("%d ",count);
    }
    printf("\n");
}

    return 0;
}