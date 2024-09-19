#include <stdio.h>

int main(){
    int cut;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &cut);
        printf("Case %d:", i+1);
        long long int pancake = 1;

        for(int j=0; j<cut; j++){
            printf(" %lld", pancake);
            pancake += j+1; 
        }
        puts("");
    }
    return 0;
}
