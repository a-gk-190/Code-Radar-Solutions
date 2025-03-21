// Your code here...
#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]<arr[i+1]){
        
    }else{
        int temp;
        
        arr[i]=temp;
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
printf("%d %d",arr[o],arr[n-1]);


    return 0;
}