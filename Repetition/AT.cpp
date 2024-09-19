#include <stdio.h>

int main(){
    int a,b;

    scanf("%d", &b);

    while(b--){
    scanf("%d", &a);

    if(a > 0){
        int i, j;
        
        for(i = 1; i <= a; i++){
            for (j = 1; j <= a - i; j++){
                printf(" "); 
            }
            for (j = 1; j <= 2 * i - 1; j++){
                printf("*"); 
            }
            printf("\n"); 
        }
    } }

    return 0;
}
