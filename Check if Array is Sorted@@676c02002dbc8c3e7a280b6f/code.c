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
    if(arr[i-1] < arr[i]){
        printf("%d ",arr[i-1]);
    }else{
        printf("%d ",arr[n]);
    }
}






    return 0;
 }