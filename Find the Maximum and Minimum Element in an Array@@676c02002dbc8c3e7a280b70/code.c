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
        
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
printf("%d %d",arr[0],arr[n-1]);


    return 0;
}