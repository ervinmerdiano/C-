#include <stdio.h>
#include <string.h>

int main(){

    int a, b, c;
    int count = 0;
    int n; 
    scanf("%d", &n); getchar();

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &a,&b,&c);
        if(b>c){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
