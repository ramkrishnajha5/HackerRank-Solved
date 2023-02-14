#include<stdio.h>

int main(){
    int i,j,rev;
    scanf("%d", &i);
    int a[i];
    for(j=1;j<=i;j++){
    scanf("%d", &a[j]);
    }
    for(j=i;j>=1;j--){
        printf("%d ",a[j]);
    }
    return 0;
}