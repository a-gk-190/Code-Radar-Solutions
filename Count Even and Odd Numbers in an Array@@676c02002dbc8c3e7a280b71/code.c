// Your code here...
#include<stdio.h>
int main(){
int n, arr[n];
for(int i=0;i<n;i++){
    printf("Enter element number: %d",i+1);
    scanf("%d",&arr[i]);
}
int even = 0;
int odd = 0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even = even+1;
    }else{
        odd = odd+1;
    }
}
printf("%d %d",even,odd);

    return 0;
}