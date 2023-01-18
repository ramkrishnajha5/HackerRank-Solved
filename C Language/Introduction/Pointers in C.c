#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int sum,diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    printf("%d\n", sum);
    printf("%d", diff);   
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);

    return 0;
}
