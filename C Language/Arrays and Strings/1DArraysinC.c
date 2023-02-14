#include<stdio.h>

int main(){
    int i,j,sum=0;
    scanf("%d", &i);
    int a[i];
    for(j=0;j<i;j++){
    scanf("%d", &a[j]);
    }
    for(j=0;j<i;j++){
        sum += a[j];
    }
    printf("%d", sum);

    return 0;
}