// Your code here...
#include<stdio.h>
int main(){
 int n;
 int arr[n];
 scanf("%d",&arr);
for(int i=0;i<n;i++){
    if(arr[n]>arr[n-1] && arr[n]>arr[n+1]){
        printf("%d",arr[n]);
    }else{
        printf("-1");
    }
}




    return 0;
}