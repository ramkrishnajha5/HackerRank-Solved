#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,sum =0;
    scanf("%d", &a);
    sum = sum+a%10;
    a = a/10;
    sum = sum+a%10;
    a = a/10;
    sum = sum+a%10;
    a = a/10;
    sum = sum+a%10;
    a = a/10;
    sum = sum+a%10;
    printf("%d",sum);



    return 0;
}
