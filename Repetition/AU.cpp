#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++){
        int N;
        scanf("%d", &N);
        printf("Case #%d: ", i);
        for(char ch = 'a'; ch <= 'a' + N - 1; ch++){
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
