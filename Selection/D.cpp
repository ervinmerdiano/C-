#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++) {
        int N,M;
        scanf("%d %d",&N,&M);

        if(N%2 == 1 && M%2 == 1){
            printf("Case #%d: Need more frogs\n", i);
        } else{
            printf("Case #%d: Party time!\n", i);
        }
    }
    return 0;
}
