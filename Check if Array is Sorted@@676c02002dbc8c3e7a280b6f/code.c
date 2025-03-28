// Your code here...
 #include<stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(int i=0;i<n;i++){
    if(n-1 < n){
        printf("%d ",n-1);
    }else{
        printf("%d ",n);
    }
}






    return 0;
 }