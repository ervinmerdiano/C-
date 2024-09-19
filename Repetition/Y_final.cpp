#include <stdio.h>

int main(){
    int a;
    int b;
    int n;
    scanf("%d", &n); getchar();

    for(int i=1; i<=n; i++){
        scanf("%d %d", &b, &a); getchar();
        printf("Case #%d:\n", i);

        for(int j=1; j<=b; j++){
            for(int k=1; k<=a; k++){
                if(k == a || k == 1 || j == b || j == 1){
                    printf("#");
                } else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
