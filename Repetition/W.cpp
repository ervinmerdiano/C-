#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int N;
        scanf("%d", &N);

        int odd = 0, even = 0;

        for (int t=0; t<N; t++){
            int Ai;
            scanf("%d", &Ai);

            if(Ai%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        printf("Odd group: %d integer(s).\n", odd);
        printf("Even group: %d integer(s).\n", even);
    
        }
    
    return 0;
}
