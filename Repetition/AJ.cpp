#include <stdio.h>

int main(){
    long long int a,b,total=0;
    scanf("%lld",&a);getchar();
    
    while(a--){
        scanf("%lld",&b);getchar();
        total += b;
    }
    printf("%lld\n",total);
    
    return 0;
}


