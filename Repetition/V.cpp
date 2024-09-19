#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 0; t < T; t++){
        int N;
        scanf("%d", &N);

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == 0 || i == N-1 || j == 0 || j == N-1 || i == j || i+j == N-1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        if(t<T-1){
            printf("\n");
        }
    }

    return 0;
}
