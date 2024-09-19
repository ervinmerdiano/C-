#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    for(int t=0; t<T; t++){
        int X, P;
        scanf("%d %d",&X,&P);
        int result = (X>>P) & 1;
        printf("%d\n", result);
    }

    return 0;
}
