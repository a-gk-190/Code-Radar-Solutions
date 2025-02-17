// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);


for(int i=1; i<=n;i++){
    for(int spc = 1; spc<=(n-i); spc++){
    printf(" ");
}
for(int j=1; j<=(i-1); j++){
    printf("%d",j);
}
    for(int j=i; j>=1; j--){
        printf("%d",j);
    }
    printf("\n");
}


for(int i=1; i<=n;i++){
// for(int spc = 1; spc<=(n-i); spc++){
//     printf(" ");
// }
// for(int j=1; j<=(i-1); j++){
//     printf("%d",j);
// }

printf("\n");


}








  return 0;
}