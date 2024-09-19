#include <stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);

    for(int t=1; t<=M; t++){
        for (int i=1; i<=N; i++){
            for (int j=N; j>=1; j--){
                if(i < j) {
                	printf(" ");
				} else printf("*");
            }
            printf("\n");
        }
        if(t<M){
        }
    }

    return 0;
}
