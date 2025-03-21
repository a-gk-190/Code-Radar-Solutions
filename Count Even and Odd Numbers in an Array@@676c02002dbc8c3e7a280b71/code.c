// Your code here...
#include<stdio.h>
int main(){
int n, arr[n];
for(int i=0;i<n;i++){
    printf("Enter element number: %d",i+1);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}


    return 0;
}