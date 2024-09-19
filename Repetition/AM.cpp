#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        scanf("%d", &b);
        printf("Case #%d:\n", i + 1);

        for(int j = 1; j <= b; j++){
            if(((j % 3 == 0) || (j % 5 == 0)) && (j % 15 != 0)){
                printf("%d Jojo\n", j);
            } else{
                printf("%d Lili\n", j);
            }
        }
    }
    return 0;
}
