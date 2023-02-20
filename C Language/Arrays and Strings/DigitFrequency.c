#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,count;
    char s[1000];
    char cmp[] ={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s",s);
    for(i=0; i<10; i++){
        count =0;
        for(j=0; j<=strlen(s); j++){
            if(s[j] == cmp[i]){
                count++;            
            }
        }
    printf("%d ",count);
    }   
    
    return 0;
}